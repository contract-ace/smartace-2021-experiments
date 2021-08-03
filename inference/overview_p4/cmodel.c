#include "cmodel.h"
#include "seahorn/seasynth.h"
GHOST_VAR sol_uint256_t prev_sum;
GHOST_VAR sol_uint256_t prev_goal;
GHOST_VAR sol_uint256_t post_sum;
GHOST_VAR sol_uint256_t post_goal;
sol_raw_uint160_t g_literal_address_0;
sol_raw_uint160_t g_literal_address_3735928559;
extern bool Infer_1(sol_raw_uint256_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint256_t v2, sol_raw_uint8_t v3,
                    sol_raw_uint256_t v4);
PARTIAL_FN bool Inv_1(sol_raw_uint256_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint256_t v2, sol_raw_uint8_t v3,
                      sol_raw_uint256_t v4) {
  if (((v4) == (0)) &&
      (((v3) == (0)) &&
       (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1))))))
    return 1;
  return Infer_1(v0, v1, v2, v3, v4);
}
struct Map_1 {
  sol_uint256_t sum;
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
  sol_uint256_t data_8;
};
struct Escrow {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Map_1 user_deposits;
  sol_uint8_t user_state;
  sol_address_t user_owner;
  sol_address_t user_beneficiary;
};
struct Crowdsale {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Escrow user_escrow;
  sol_uint256_t user_raised;
  sol_uint256_t user_goal;
  sol_uint256_t user_closeTime;
};
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt) {
  sol_require(((bal)->v) >= ((amt).v), "Insufficient funds to call.");
  ((bal)->v) -= ((amt).v);
  return amt;
}
uint8_t sol_send(sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t src,
                 sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  if (((bal)->v) < ((amt).v))
    return 0;
  ((bal)->v) -= ((amt).v);
  if (((dst).v) == (0)) {
    return 0;
  }
  if (((dst).v) == (1)) {
    return 0;
  }
  if (((dst).v) == (2)) {
    return 0;
  }
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
void sol_transfer(sol_address_t sender, sol_uint256_t value,
                  sol_uint256_t blocknum, sol_uint256_t timestamp,
                  sol_bool_t paid, sol_address_t origin, sol_address_t src,
                  sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send(sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                       origin, src, bal, dst, amt),
              "Transfer failed.");
}
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Crowdsale_Constructor(struct Crowdsale *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  Init_Escrow(&(self->user_escrow), (self)->model_address,
              Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
              origin, Init_sol_address_t(g_literal_address_3735928559));
}
void Init_Crowdsale(struct Crowdsale *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_raised) = (Init_sol_uint256_t(0));
  ((self)->user_goal) = (Init_sol_uint256_t(999999999));
  ((self)->user_closeTime) = (Init_sol_uint256_t(((timestamp).v) + (2592000)));
  Crowdsale_Constructor(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void Crowdsale_Method_invest(struct Crowdsale *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require(((timestamp).v) <= ((self->user_closeTime).v), 0);
  sol_require(((self->user_raised).v) < ((self->user_goal).v), 0);
  Escrow_Method_deposit(
      &(self->user_escrow), (self)->model_address,
      sol_pay(&((self)->model_balance), Init_sol_uint256_t((value).v)),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_address_t((sender).v));
  ((self->user_raised).v) = (((self->user_raised).v) + ((value).v));
}
void Crowdsale_Method_close(struct Crowdsale *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  sol_require((((timestamp).v) > ((self->user_closeTime).v)) ||
                  (((self->user_raised).v) >= ((self->user_goal).v)),
              0);
  if (((self->user_raised).v) >= ((self->user_goal).v)) {
    Escrow_Method_close(&(self->user_escrow), (self)->model_address,
                        Init_sol_uint256_t(0), blocknum, timestamp,
                        Init_sol_bool_t(1), origin);
  } else {
    Escrow_Method_refund(&(self->user_escrow), (self)->model_address,
                         Init_sol_uint256_t(0), blocknum, timestamp,
                         Init_sol_bool_t(1), origin);
  }
}
struct Map_1 ZeroInit_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(0));
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7) = (Init_sol_uint256_t(0));
  ((tmp).data_8) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((9) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((8) == ((key_0).v))
      return (arr)->data_8;
    else if ((7) == ((key_0).v))
      return (arr)->data_7;
    else if ((6) == ((key_0).v))
      return (arr)->data_6;
    else if ((5) == ((key_0).v))
      return (arr)->data_5;
    else if ((4) == ((key_0).v))
      return (arr)->data_4;
    else if ((3) == ((key_0).v))
      return (arr)->data_3;
    else if ((2) == ((key_0).v))
      return (arr)->data_2;
    else if ((1) == ((key_0).v))
      return (arr)->data_1;
    else if ((0) == ((key_0).v))
      return (arr)->data_0;
  }
  return Init_sol_uint256_t(0);
}
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat) {
  {
    sol_assert((9) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((8) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_8).v);
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_7).v);
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_6).v);
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_5).v);
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_4).v);
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_3).v);
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_2).v);
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_1).v);
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_0).v);
      ((arr)->data_0) = (dat);
    }
  }
  (((arr)->sum).v) += ((dat).v);
}
void Escrow_Constructor(struct Escrow *self, sol_address_t sender,
                        sol_uint256_t value, sol_uint256_t blocknum,
                        sol_uint256_t timestamp, sol_bool_t paid,
                        sol_address_t origin, sol_address_t func_user_b) {
  ((self->user_beneficiary).v) = ((func_user_b).v);
  ((self->user_owner).v) = ((sender).v);
}
void Init_Escrow(struct Escrow *self, sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t user_b) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_deposits) = (ZeroInit_Map_1());
  ((self)->user_state) = (Init_sol_uint8_t(0));
  ((self)->user_owner) = (Init_sol_address_t(0));
  ((self)->user_beneficiary) = (Init_sol_address_t(0));
  Escrow_Constructor(self, sender, value, blocknum, timestamp,
                     Init_sol_bool_t(0), origin, user_b);
}
void Escrow_Method_1_deposit(struct Escrow *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_p) {
  Write_Map_1(
      &(self->user_deposits), Init_sol_address_t((func_user_p).v),
      Init_sol_uint256_t(((Read_Map_1(&(self->user_deposits),
                                      Init_sol_address_t((func_user_p).v)))
                              .v) +
                         ((value).v)));
}
void Escrow_Method_deposit(struct Escrow *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin, sol_address_t func_model_p) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Escrow_Method_1_deposit(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin, func_model_p);
}
void Escrow_Method_withdraw(struct Escrow *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  sol_require(((self->user_state).v) == (1), 0);
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((self->user_beneficiary).v),
               Init_sol_uint256_t(((self)->model_balance).v));
}
void Escrow_Method_claimRefund(struct Escrow *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin,
                               sol_address_t func_user_p) {
  sol_require(((self->user_state).v) == (2), 0);
  sol_uint256_t func_user_amount = Init_sol_uint256_t(
      (Read_Map_1(&(self->user_deposits), Init_sol_address_t((func_user_p).v)))
          .v);
  Write_Map_1(&(self->user_deposits), Init_sol_address_t((func_user_p).v),
              Init_sol_uint256_t(0));
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((func_user_p).v),
               Init_sol_uint256_t((func_user_amount).v));
}
void Escrow_Method_1_close(struct Escrow *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  ((self->user_state).v) = (1);
}
void Escrow_Method_close(struct Escrow *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Escrow_Method_1_close(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void Escrow_Method_1_refund(struct Escrow *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  ((self->user_state).v) = (2);
}
void Escrow_Method_refund(struct Escrow *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Escrow_Method_1_refund(self, sender, value, blocknum, timestamp,
                         Init_sol_bool_t(0), origin);
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(12, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(13, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Crowdsale contract_1;
  struct Escrow *contract_2;
  smartace_log("[Handling constants]");
  (g_literal_address_0) = (0);
  (g_literal_address_3735928559) =
      (GET_ND_RANGE(14, 1, 4, "g_literal_address_3735928559"));
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_escrow));
  (((contract_2)->model_address).v) = (2);
  (((contract_2)->user_owner).v) = (0);
  (((contract_2)->user_beneficiary).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(17, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(15, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(16, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(18, 3, 8, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Crowdsale(&(contract_1), sender, value, blocknum, timestamp, paid,
                   sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
      uint64_t map_id;
      (map_id) = (GET_ND_RANGE(20, 0, 2, "map"));
      switch (map_id) {
      case 0: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(19, 0, 9, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_0).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_1).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_2).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_3).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_4).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_5).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_6).v);
          break;
        }
        case 7: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_7).v);
          break;
        }
        case 8: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_deposits).data_8).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                      ((contract_1).user_closeTime).v,
                      ((contract_2)->user_state).v, v0));
        break;
      }
      default: {
      }
      }
    }
    if (sol_is_using_reps()) {
      (((contract_2)->user_deposits).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(21, 256, "Escrow::deposits::_0")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_0).v));
      (((contract_2)->user_deposits).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(22, 256, "Escrow::deposits::_1")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_1).v));
      (((contract_2)->user_deposits).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(23, 256, "Escrow::deposits::_2")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_2).v));
      (((contract_2)->user_deposits).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(24, 256, "Escrow::deposits::_3")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_3).v));
      (((contract_2)->user_deposits).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(25, 256, "Escrow::deposits::_4")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_4).v));
      (((contract_2)->user_deposits).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(26, 256, "Escrow::deposits::_5")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_5).v));
      (((contract_2)->user_deposits).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(27, 256, "Escrow::deposits::_6")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_6).v));
      (((contract_2)->user_deposits).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(28, 256, "Escrow::deposits::_7")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_7).v));
      (((contract_2)->user_deposits).data_8) =
          (Init_sol_uint256_t(GET_ND_UINT(29, 256, "Escrow::deposits::_8")));
      assume(Inv_1(((contract_1).user_raised).v, ((contract_1).user_goal).v,
                   ((contract_1).user_closeTime).v,
                   ((contract_2)->user_state).v,
                   (((contract_2)->user_deposits).data_8).v));
    }
    if (GET_ND_RANGE(32, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(30, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(31, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(33, 0, 7, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling invest() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(2, 256, "value"));
      Crowdsale_Method_invest(&(contract_1), sender, value, blocknum, timestamp,
                              paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling close() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Crowdsale_Method_close(&(contract_1), sender, value, blocknum, timestamp,
                             paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling deposit(p) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(5, 256, "value"));
      sol_address_t arg_p = Init_sol_address_t(GET_ND_RANGE(6, 0, 8, "p"));
      Escrow_Method_deposit(contract_2, sender, value, blocknum, timestamp,
                            paid, sender, arg_p);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling withdraw() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Escrow_Method_withdraw(contract_2, sender, value, blocknum, timestamp,
                             paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling claimRefund(p) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_p = Init_sol_address_t(GET_ND_RANGE(9, 0, 8, "p"));
      prev_sum = contract_2->user_deposits.sum;
      prev_goal = contract_1.user_goal;
      Escrow_Method_claimRefund(contract_2, sender, value, blocknum, timestamp,
                                paid, sender, arg_p);
      post_sum = contract_2->user_deposits.sum;
      post_goal = contract_1.user_goal;
      sol_assert(prev_sum.v < prev_goal.v, 0);
      sol_assert(post_sum.v < post_goal.v, 0);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling close() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Escrow_Method_close(contract_2, sender, value, blocknum, timestamp, paid,
                          sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling refund() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Escrow_Method_refund(contract_2, sender, value, blocknum, timestamp, paid,
                           sender);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
  }
}