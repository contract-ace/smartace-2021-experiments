#include "cmodel.h"
#include "seahorn/seasynth.h"
sol_raw_uint160_t g_literal_address_0;
extern bool Infer_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint256_t v2);
PARTIAL_FN bool Inv_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint256_t v2) {
  if (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1))))
    return 1;
  return Infer_1(v0, v1, v2);
}
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
};
struct Auction {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_isOpen;
  sol_address_t user_owner;
  sol_uint256_t user_maxBid;
  struct Map_1 user_bids;
};
struct Manager {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Auction user_auction;
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
void Manager_Constructor(struct Manager *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  Init_Auction(&(self->user_auction), (self)->model_address,
               Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
               origin);
}
void Init_Manager(struct Manager *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Manager_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
void Manager_Method_openAuction(struct Manager *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin) {
  Auction_Method_open(&(self->user_auction), (self)->model_address,
                      Init_sol_uint256_t(0), blocknum, timestamp,
                      Init_sol_bool_t(1), origin);
}
struct Map_1 ZeroInit_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v))
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
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      ((arr)->data_0) = (dat);
    }
  }
}
void Auction_Constructor(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Auction(struct Auction *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_isOpen) = (Init_sol_bool_t(0));
  ((self)->user_owner) = (Init_sol_address_t(0));
  ((self)->user_maxBid) = (Init_sol_uint256_t(0));
  ((self)->user_bids) = (ZeroInit_Map_1());
  Auction_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
void Auction_Method_1_releaseTo(struct Auction *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_user___new) {
  ((self->user_owner).v) = ((func_user___new).v);
}
void Auction_Method_releaseTo(struct Auction *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_model___new) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_releaseTo(self, sender, value, blocknum, timestamp,
                             Init_sol_bool_t(0), origin, func_model___new);
}
void Auction_Method_1_open(struct Auction *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  ((self->user_isOpen).v) = (1);
}
void Auction_Method_open(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_open(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void Auction_Method_1_close(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  ((self->user_isOpen).v) = (0);
}
void Auction_Method_close(struct Auction *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_close(self, sender, value, blocknum, timestamp,
                         Init_sol_bool_t(0), origin);
}
void Auction_Method_deposit(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_user_bid = Init_sol_uint256_t(
      ((Read_Map_1(&(self->user_bids), Init_sol_address_t((sender).v))).v) +
      ((value).v));
  sol_require((self->user_isOpen).v, 0);
  sol_require(((func_user_bid).v) > ((self->user_maxBid).v), 0);
  Write_Map_1(&(self->user_bids), Init_sol_address_t((sender).v),
              Init_sol_uint256_t((func_user_bid).v));
  ((self->user_maxBid).v) = ((func_user_bid).v);
}
void Auction_Method_withdraw(struct Auction *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_user_bid = Init_sol_uint256_t(
      (Read_Map_1(&(self->user_bids), Init_sol_address_t((sender).v))).v);
  sol_require((self->user_isOpen).v, 0);
  sol_require(((func_user_bid).v) < ((self->user_maxBid).v), 0);
  Write_Map_1(&(self->user_bids), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(0));
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((sender).v),
               Init_sol_uint256_t((func_user_bid).v));
}
int property(struct Manager *c0, sol_address_t addr)
{
  sol_uint256_t bid = Read_Map_1(&(c0->user_auction.user_bids), addr);
  sol_uint256_t maximum = c0->user_auction.user_maxBid;
  return bid.v <= maximum.v;
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(10, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(11, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Manager contract_1;
  struct Auction *contract_2;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_auction));
  (((contract_2)->model_address).v) = (2);
  (((contract_2)->user_owner).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(14, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(12, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(13, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(15, 3, 6, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Manager(&(contract_1), sender, value, blocknum, timestamp, paid,
                 sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_assert(property(&contract_1, Init_sol_address_t(0)), "Address 0 violates Prop.");
    sol_assert(property(&contract_1, Init_sol_address_t(1)), "Address 1 violates Prop.");
    sol_assert(property(&contract_1, Init_sol_address_t(2)), "Address 2 violates Prop.");
    sol_assert(property(&contract_1, Init_sol_address_t(3)), "Address 3 violates Prop.");
    sol_assert(property(&contract_1, Init_sol_address_t(4)), "Address 4 violates Prop.");
    sol_assert(property(&contract_1, Init_sol_address_t(5)), "Address 5 violates Prop.");
    if (sol_is_using_reps()) {
      uint64_t map_id;
      (map_id) = (GET_ND_RANGE(17, 0, 2, "map"));
      switch (map_id) {
      case 0: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(16, 0, 4, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_bids).data_3).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_bids).data_4).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_bids).data_5).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_2)->user_bids).data_6).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_1(((contract_2)->user_isOpen).v,
                      ((contract_2)->user_maxBid).v, v0));
        break;
      }
      default: {
      }
      }
    }
    if (sol_is_using_reps()) {
      (((contract_2)->user_bids).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(18, 256, "Auction::bids::_3")));
      assume(Inv_1(((contract_2)->user_isOpen).v, ((contract_2)->user_maxBid).v,
                   (((contract_2)->user_bids).data_3).v));
      (((contract_2)->user_bids).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(19, 256, "Auction::bids::_4")));
      assume(Inv_1(((contract_2)->user_isOpen).v, ((contract_2)->user_maxBid).v,
                   (((contract_2)->user_bids).data_4).v));
      (((contract_2)->user_bids).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(20, 256, "Auction::bids::_5")));
      assume(Inv_1(((contract_2)->user_isOpen).v, ((contract_2)->user_maxBid).v,
                   (((contract_2)->user_bids).data_5).v));
      (((contract_2)->user_bids).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(21, 256, "Auction::bids::_6")));
      assume(Inv_1(((contract_2)->user_isOpen).v, ((contract_2)->user_maxBid).v,
                   (((contract_2)->user_bids).data_6).v));
    }
    if (GET_ND_RANGE(24, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(22, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(23, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(25, 0, 6, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling openAuction() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Manager_Method_openAuction(&(contract_1), sender, value, blocknum,
                                 timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling releaseTo(_new) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__new =
          Init_sol_address_t(GET_ND_RANGE(3, 0, 6, "_new"));
      Auction_Method_releaseTo(contract_2, sender, value, blocknum, timestamp,
                               paid, sender, arg__new);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling open() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Auction_Method_open(contract_2, sender, value, blocknum, timestamp, paid,
                          sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling close() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Auction_Method_close(contract_2, sender, value, blocknum, timestamp, paid,
                           sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling deposit() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(7, 256, "value"));
      Auction_Method_deposit(contract_2, sender, value, blocknum, timestamp,
                             paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling withdraw() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 3, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(9, 256, "value"));
      Auction_Method_withdraw(contract_2, sender, value, blocknum, timestamp,
                              paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
  }
}