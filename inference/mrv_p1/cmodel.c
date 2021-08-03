#include "cmodel.h"
#include "seahorn/seasynth.h"
sol_raw_uint160_t g_literal_address_0;
extern bool Infer_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint8_t v2, sol_raw_uint8_t v3,
                    sol_raw_uint256_t v4, sol_raw_uint256_t v5,
                    sol_raw_uint256_t v6, sol_raw_uint256_t v7);
PARTIAL_FN bool Inv_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint8_t v2, sol_raw_uint8_t v3,
                      sol_raw_uint256_t v4, sol_raw_uint256_t v5,
                      sol_raw_uint256_t v6, sol_raw_uint256_t v7) {
  if (((v7) == (0)) &&
      (((v6) == (0)) &&
       (((v5) == (0)) &&
        (((v4) == (0)) &&
         (((v3) == (0)) &&
          (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1)))))))))
    return 1;
  return Infer_1(v0, v1, v2, v3, v4, v5, v6, v7);
}
extern bool Infer_2(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint8_t v2, sol_raw_uint8_t v3,
                    sol_raw_uint256_t v4, sol_raw_uint256_t v5,
                    sol_raw_uint256_t v6, sol_raw_uint256_t v7);
PARTIAL_FN bool Inv_2(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint8_t v2, sol_raw_uint8_t v3,
                      sol_raw_uint256_t v4, sol_raw_uint256_t v5,
                      sol_raw_uint256_t v6, sol_raw_uint256_t v7) {
  if (((v7) == (0)) &&
      (((v6) == (0)) &&
       (((v5) == (0)) &&
        (((v4) == (0)) &&
         (((v3) == (0)) &&
          (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1)))))))))
    return 1;
  return Infer_2(v0, v1, v2, v3, v4, v5, v6, v7);
}
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
};
struct Map_2 {
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_0_6;
  sol_uint256_t data_0_7;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_1_7;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_2_7;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_3_7;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_4_7;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_5_7;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
  sol_uint256_t data_6_7;
  sol_uint256_t data_7_0;
  sol_uint256_t data_7_1;
  sol_uint256_t data_7_2;
  sol_uint256_t data_7_3;
  sol_uint256_t data_7_4;
  sol_uint256_t data_7_5;
  sol_uint256_t data_7_6;
  sol_uint256_t data_7_7;
};
struct MRVToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_uint8_t user_decimals;
  sol_address_t user_beneficiary;
  sol_uint256_t user_maxCrowdsaleSupplyInWholeTokens;
  sol_bool_t user_crowdsaleStarted;
  sol_bool_t user_crowdsaleEnded;
  sol_uint256_t user_openTimer;
  sol_uint256_t user_closeTimer;
  sol_address_t user___owner;
  struct Map_1 user___balances;
  struct Map_2 user___allowed;
  sol_uint256_t user___totalSupply;
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
    sol_assert(0, "Fallback not allowed in: MRVToken");
  }
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
void MRVToken_Fallback_1(struct MRVToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void MRVToken_Fallback(struct MRVToken *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin);
void ERC20_Method_For_MRVToken___transfer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value);
void ERC20_Method_For_MRVToken___mint(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin,
                                      sol_address_t func_user_account,
                                      sol_uint256_t func_user_value);
void Ownable_Method_For_MRVToken___transferOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void MRVToken_Method_1_createTokens(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_address_t func_user_recipient);
void MRVToken_Method_createTokens(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_model_recipient);
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  if (((func_user_a).v) == (0)) {
    {
      return Init_sol_uint256_t(0);
    }
  }
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) * ((func_user_b).v));
  sol_require((((func_user_c).v) / ((func_user_a).v)) == ((func_user_b).v), 0);
  { return Init_sol_uint256_t((func_user_c).v); }
}
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_require(((func_user_b).v) <= ((func_user_a).v), 0);
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v));
  { return Init_sol_uint256_t((func_user_c).v); }
}
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) + ((func_user_b).v));
  sol_require(((func_user_c).v) >= ((func_user_a).v), 0);
  { return Init_sol_uint256_t((func_user_c).v); }
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
  ((tmp).data_7) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v))
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
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
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
struct Map_2 ZeroInit_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).data_0_0) = (Init_sol_uint256_t(0));
  ((tmp).data_0_1) = (Init_sol_uint256_t(0));
  ((tmp).data_0_2) = (Init_sol_uint256_t(0));
  ((tmp).data_0_3) = (Init_sol_uint256_t(0));
  ((tmp).data_0_4) = (Init_sol_uint256_t(0));
  ((tmp).data_0_5) = (Init_sol_uint256_t(0));
  ((tmp).data_0_6) = (Init_sol_uint256_t(0));
  ((tmp).data_0_7) = (Init_sol_uint256_t(0));
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_1_7) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_7) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_7) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_7) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_7) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_7) = (Init_sol_uint256_t(0));
  ((tmp).data_7_0) = (Init_sol_uint256_t(0));
  ((tmp).data_7_1) = (Init_sol_uint256_t(0));
  ((tmp).data_7_2) = (Init_sol_uint256_t(0));
  ((tmp).data_7_3) = (Init_sol_uint256_t(0));
  ((tmp).data_7_4) = (Init_sol_uint256_t(0));
  ((tmp).data_7_5) = (Init_sol_uint256_t(0));
  ((tmp).data_7_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7_7) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((8) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_7_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_7_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_7_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_7_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_7_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_7_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_7_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_7_0;
    } else if ((6) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_6_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_6_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_6_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_6_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_6_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_6_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_6_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_6_0;
    } else if ((5) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_5_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_5_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_5_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_5_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_5_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_5_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_5_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_5_0;
    } else if ((4) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_4_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_4_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_4_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_4_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_4_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_4_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_4_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_4_0;
    } else if ((3) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_3_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_3_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_3_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_3_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_3_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_3_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_3_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_3_0;
    } else if ((2) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_2_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_2_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_2_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_2_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_2_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_2_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_2_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_2_0;
    } else if ((1) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_1_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_1_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_1_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_1_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_1_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_1_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_1_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_1_0;
    } else if ((0) == ((key_0).v)) {
      if ((7) == ((key_1).v))
        return (arr)->data_0_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_0_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_0_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_0_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_0_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_0_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_0_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_0_0;
    }
  }
  return Init_sol_uint256_t(0);
}
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((8) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_7_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_7_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_7_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_7_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_7_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_7_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_7_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_7_0) = (dat);
      }
    } else if ((6) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_6_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_6_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_6_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_6_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_6_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_6_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_6_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_6_0) = (dat);
      }
    } else if ((5) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_5_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_5_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_5_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_5_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_5_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_5_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_5_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_5_0) = (dat);
      }
    } else if ((4) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_4_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_4_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_4_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_4_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_4_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_4_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_4_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_4_0) = (dat);
      }
    } else if ((3) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_3_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_3_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_3_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_3_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_3_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_3_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_3_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_3_0) = (dat);
      }
    } else if ((2) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_2_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_2_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_2_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_2_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_2_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_2_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_2_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_2_0) = (dat);
      }
    } else if ((1) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_1_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_1_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_1_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_1_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_1_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_1_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_1_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_1_0) = (dat);
      }
    } else if ((0) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        ((arr)->data_0_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_0_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_0_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_0_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_0_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_0_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_0_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_0_0) = (dat);
      }
    }
  }
}
void MRVToken_Constructor(struct MRVToken *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin,
                          sol_address_t func_user_sendProceedsTo,
                          sol_address_t func_user_sendTokensTo) {
  ((self->user_beneficiary).v) = ((func_user_sendProceedsTo).v);
  sol_require(((self->user_beneficiary).v) != (((self)->model_address).v),
              "Prevent cyclic call.");
  ((self->user_decimals).v) = (2);
  ERC20_Method_For_MRVToken___mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_sendTokensTo).v),
      Init_sol_uint256_t((5000) * (100)));
  ((self->user_crowdsaleStarted).v) = (0);
  ((self->user_crowdsaleEnded).v) = (0);
  ((self->user_maxCrowdsaleSupplyInWholeTokens).v) = (100000000);
}
void Init_ERC20_For_MRVToken(struct MRVToken *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowed) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void Ownable_Constructor_For_MRVToken(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self->user___owner).v) = ((sender).v);
  {
    g_literal_address_0;
    (self->user___owner).v;
    sol_emit("OwnershipTransferred(address(0), _owner)");
  }
}
void Init_Ownable_For_MRVToken(struct MRVToken *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  ((self)->user___owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_MRVToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_HasNoTokens_For_MRVToken(struct MRVToken *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {}
void Init_HasNoContracts_For_MRVToken(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {}
void Init_MRVToken(struct MRVToken *self, sol_address_t sender,
                   sol_uint256_t value, sol_uint256_t blocknum,
                   sol_uint256_t timestamp, sol_bool_t paid,
                   sol_address_t origin, sol_address_t user_sendProceedsTo,
                   sol_address_t user_sendTokensTo) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_decimals) = (Init_sol_uint8_t(0));
  ((self)->user_beneficiary) = (Init_sol_address_t(0));
  ((self)->user_maxCrowdsaleSupplyInWholeTokens) = (Init_sol_uint256_t(0));
  ((self)->user_crowdsaleStarted) = (Init_sol_bool_t(0));
  ((self)->user_crowdsaleEnded) = (Init_sol_bool_t(0));
  ((self)->user_openTimer) = (Init_sol_uint256_t(0));
  ((self)->user_closeTimer) = (Init_sol_uint256_t(0));
  Init_ERC20_For_MRVToken(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin);
  Init_Ownable_For_MRVToken(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
  Init_HasNoTokens_For_MRVToken(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin);
  Init_HasNoContracts_For_MRVToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
  MRVToken_Constructor(self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin, user_sendProceedsTo,
                       user_sendTokensTo);
}
void MRVToken_Fallback_1(struct MRVToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  MRVToken_Method_createTokens(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin,
                               Init_sol_address_t((sender).v));
}
void MRVToken_Fallback(struct MRVToken *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleEnded).v)
    sol_require(0, "Revert.");
  if (!((self->user_crowdsaleStarted).v))
    sol_require(0, "Revert.");
  MRVToken_Fallback_1(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
sol_bool_t
MRVToken_Method_openTimerElapsed(struct MRVToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  {
    return Init_sol_bool_t((((self->user_openTimer).v) != (0)) &&
                           (((timestamp).v) > ((self->user_openTimer).v)));
  }
}
sol_bool_t
MRVToken_Method_closeTimerElapsed(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  {
    return Init_sol_bool_t((((self->user_closeTimer).v) != (0)) &&
                           (((timestamp).v) > ((self->user_closeTimer).v)));
  }
}
void MRVToken_Method_checkOpenTimer(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  if ((MRVToken_Method_openTimerElapsed(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin))
          .v) {
    ((self->user_crowdsaleStarted).v) = (1);
    ((self->user_openTimer).v) = (0);
    {
      (timestamp).v;
      sol_emit("CrowdsaleOpen(now)");
    }
  }
}
void MRVToken_Method_checkCloseTimer(struct MRVToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  if ((MRVToken_Method_closeTimerElapsed(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin))
          .v) {
    ((self->user_crowdsaleEnded).v) = (1);
    ((self->user_closeTimer).v) = (0);
    {
      (timestamp).v;
      sol_emit("CrowdsaleClose(now)");
    }
  }
}
sol_bool_t
MRVToken_Method_isCrowdsaleActive(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  {
    return Init_sol_bool_t((((self->user_crowdsaleStarted).v) ||
                            ((MRVToken_Method_openTimerElapsed(
                                  self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin))
                                 .v)) &&
                           (!(((self->user_crowdsaleEnded).v) ||
                              ((MRVToken_Method_closeTimerElapsed(
                                    self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin))
                                   .v))));
  }
}
void MRVToken_Method_2_setMaxSupply(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_newMaxInWholeTokens) {
  ((self->user_maxCrowdsaleSupplyInWholeTokens).v) =
      ((func_user_newMaxInWholeTokens).v);
}
void MRVToken_Method_1_setMaxSupply(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_newMaxInWholeTokens) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleStarted).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_setMaxSupply(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin,
                                 func_model_newMaxInWholeTokens);
}
void MRVToken_Method_setMaxSupply(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_newMaxInWholeTokens) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_setMaxSupply(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin,
                                 func_model_newMaxInWholeTokens);
}
void MRVToken_Method_2_openCrowdsale(struct MRVToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self->user_crowdsaleStarted).v) = (1);
  ((self->user_openTimer).v) = (0);
  {
    (timestamp).v;
    sol_emit("CrowdsaleOpen(now)");
  }
}
void MRVToken_Method_1_openCrowdsale(struct MRVToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleStarted).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_openCrowdsale(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
}
void MRVToken_Method_openCrowdsale(struct MRVToken *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_openCrowdsale(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
}
void MRVToken_Method_2_setCrowdsaleOpenTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_minutesFromNow) {
  ((self->user_openTimer).v) =
      (((timestamp).v) + (((func_user_minutesFromNow).v) * (60)));
}
void MRVToken_Method_1_setCrowdsaleOpenTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_minutesFromNow) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleStarted).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_setCrowdsaleOpenTimerFor(self, sender, value, blocknum,
                                             timestamp, Init_sol_bool_t(0),
                                             origin, func_model_minutesFromNow);
}
void MRVToken_Method_setCrowdsaleOpenTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_minutesFromNow) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_setCrowdsaleOpenTimerFor(self, sender, value, blocknum,
                                             timestamp, Init_sol_bool_t(0),
                                             origin, func_model_minutesFromNow);
}
void MRVToken_Method_2_clearCrowdsaleOpenTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_openTimer).v) = (0);
}
void MRVToken_Method_1_clearCrowdsaleOpenTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleStarted).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_clearCrowdsaleOpenTimer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void MRVToken_Method_clearCrowdsaleOpenTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_clearCrowdsaleOpenTimer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void MRVToken_Method_2_setCrowdsaleCloseTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_minutesFromNow) {
  ((self->user_closeTimer).v) =
      (((timestamp).v) + (((func_user_minutesFromNow).v) * (60)));
}
void MRVToken_Method_1_setCrowdsaleCloseTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_minutesFromNow) {
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleEnded).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_setCrowdsaleCloseTimerFor(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_minutesFromNow);
}
void MRVToken_Method_setCrowdsaleCloseTimerFor(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model_minutesFromNow) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_setCrowdsaleCloseTimerFor(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_minutesFromNow);
}
void MRVToken_Method_2_clearCrowdsaleCloseTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_closeTimer).v) = (0);
}
void MRVToken_Method_1_clearCrowdsaleCloseTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleEnded).v)
    sol_require(0, "Revert.");
  MRVToken_Method_2_clearCrowdsaleCloseTimer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void MRVToken_Method_clearCrowdsaleCloseTimer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_clearCrowdsaleCloseTimer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void MRVToken_Method_2_closeCrowdsale(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self->user_crowdsaleEnded).v) = (1);
  ((self->user_closeTimer).v) = (0);
  {
    (timestamp).v;
    sol_emit("CrowdsaleClose(now)");
  }
}
void MRVToken_Method_1_closeCrowdsale(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleEnded).v)
    sol_require(0, "Revert.");
  if (!((self->user_crowdsaleStarted).v))
    sol_require(0, "Revert.");
  MRVToken_Method_2_closeCrowdsale(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void MRVToken_Method_closeCrowdsale(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_closeCrowdsale(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void MRVToken_Method_2_setDecimals(struct MRVToken *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_uint8_t func_user_newDecimals) {
  ((self->user_decimals).v) = ((func_user_newDecimals).v);
  {
    (self->user_decimals).v;
    sol_emit("DecimalChange(decimals)");
  }
}
void MRVToken_Method_1_setDecimals(struct MRVToken *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_uint8_t func_model_newDecimals) {
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if (!((self->user_crowdsaleEnded).v))
    sol_require(0, "Revert.");
  MRVToken_Method_2_setDecimals(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin,
                                func_model_newDecimals);
}
void MRVToken_Method_setDecimals(struct MRVToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_uint8_t func_model_newDecimals) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_setDecimals(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin,
                                func_model_newDecimals);
}
void MRVToken_Method_1_reclaimEther(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  sol_require(
      sol_send(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((Ownable_Method_For_MRVToken_owner(
                                       self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin))
                                      .v),
               Init_sol_uint256_t(((self)->model_balance).v)),
      0);
}
void MRVToken_Method_reclaimEther(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  MRVToken_Method_1_reclaimEther(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
}
sol_bool_t MRVToken_Method_increaseAllowance(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_var0,
    sol_uint256_t func_user_var1) {
  sol_require(0, "Revert.");
}
sol_bool_t MRVToken_Method_decreaseAllowance(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_var0,
    sol_uint256_t func_user_var1) {
  sol_require(0, "Revert.");
}
sol_address_t
Ownable_Method_For_MRVToken_owner(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  { return Init_sol_address_t((self->user___owner).v); }
}
sol_bool_t
Ownable_Method_For_MRVToken_isOwner(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  { return Init_sol_bool_t(((sender).v) == ((self->user___owner).v)); }
}
void Ownable_Method_1_For_MRVToken_renounceOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    (self->user___owner).v;
    g_literal_address_0;
    sol_emit("OwnershipTransferred(_owner, address(0))");
  }
  ((self->user___owner).v) = (g_literal_address_0);
}
void Ownable_Method_For_MRVToken_renounceOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  Ownable_Method_1_For_MRVToken_renounceOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Ownable_Method_1_For_MRVToken_transferOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  Ownable_Method_For_MRVToken___transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_newOwner).v));
}
void Ownable_Method_For_MRVToken_transferOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require((Ownable_Method_For_MRVToken_isOwner(self, sender, value,
                                                   blocknum, timestamp,
                                                   Init_sol_bool_t(0), origin))
                  .v,
              0);
  Ownable_Method_1_For_MRVToken_transferOwnership(self, sender, value, blocknum,
                                                  timestamp, Init_sol_bool_t(0),
                                                  origin, func_model_newOwner);
}
sol_uint256_t ERC20_Method_For_MRVToken_totalSupply(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_For_MRVToken_balanceOf(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_owner).v)))
            .v);
  }
}
sol_uint256_t ERC20_Method_For_MRVToken_allowance(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowed),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_MRVToken_transfer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_MRVToken___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_MRVToken_approve(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value) {
  sol_require(((func_user_spender).v) != (g_literal_address_0), 0);
  Write_Map_2(&(self->user___allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user_spender).v),
              Init_sol_uint256_t((func_user_value).v));
  {
    (sender).v;
    (func_user_spender).v;
    (func_user_value).v;
    sol_emit("Approval(msg.sender, spender, value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_MRVToken_transferFrom(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
  sol_require(((func_user_value).v) <=
                  ((Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((func_user_from).v),
                               Init_sol_address_t((sender).v)))
                       .v),
              0);
  Write_Map_2(&(self->user___allowed), Init_sol_address_t((func_user_from).v),
              Init_sol_address_t((sender).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_2(&(self->user___allowed),
                                       Init_sol_address_t((func_user_from).v),
                                       Init_sol_address_t((sender).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  ERC20_Method_For_MRVToken___transfer(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin,
                                       Init_sol_address_t((func_user_from).v),
                                       Init_sol_address_t((func_user_to).v),
                                       Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
void ERC20_Method_For_MRVToken___transfer(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
  sol_require(((func_user_value).v) <=
                  ((Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_from).v)))
                       .v),
              0);
  sol_require(((func_user_to).v) != (g_literal_address_0), 0);
  Write_Map_1(&(self->user___balances), Init_sol_address_t((func_user_from).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user___balances),
                                       Init_sol_address_t((func_user_from).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  Write_Map_1(&(self->user___balances), Init_sol_address_t((func_user_to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user___balances),
                                       Init_sol_address_t((func_user_to).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  {
    (func_user_from).v;
    (func_user_to).v;
    (func_user_value).v;
    sol_emit("Transfer(from, to, value)");
  }
}
void ERC20_Method_For_MRVToken___mint(struct MRVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin,
                                      sol_address_t func_user_account,
                                      sol_uint256_t func_user_value) {
  sol_require(((func_user_account).v) != (g_literal_address_0), 0);
  ((self->user___totalSupply).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user___totalSupply).v),
                            Init_sol_uint256_t((func_user_value).v)))
           .v);
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_account).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_account).v)))
                       .v),
               Init_sol_uint256_t((func_user_value).v)))
              .v));
  {
    g_literal_address_0;
    (func_user_account).v;
    (func_user_value).v;
    sol_emit("Transfer(address(0), account, value)");
  }
}
void Ownable_Method_For_MRVToken___transferOwnership(
    struct MRVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (g_literal_address_0), 0);
  {
    (self->user___owner).v;
    (func_user_newOwner).v;
    sol_emit("OwnershipTransferred(_owner, newOwner)");
  }
  ((self->user___owner).v) = ((func_user_newOwner).v);
}
void MRVToken_Method_1_createTokens(struct MRVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_address_t func_user_recipient) {
  if (((value).v) == (0)) {
    sol_require(0, "Revert.");
  }
  sol_uint256_t func_user_tokens =
      Init_sol_uint256_t((SafeMath_Method_mul(Init_sol_uint256_t((value).v),
                                              Init_sol_uint256_t(5000)))
                             .v);
  sol_uint256_t func_user_newTotalSupply = Init_sol_uint256_t(
      (SafeMath_Method_add(
           Init_sol_uint256_t((ERC20_Method_For_MRVToken_totalSupply(
                                   self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin))
                                  .v),
           Init_sol_uint256_t((func_user_tokens).v)))
          .v);
  if (((func_user_newTotalSupply).v) >
      (((5000) + ((self->user_maxCrowdsaleSupplyInWholeTokens).v)) * (100))) {
    sol_require(0, "Revert.");
  }
  ERC20_Method_For_MRVToken___mint(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin,
                                   Init_sol_address_t((func_user_recipient).v),
                                   Init_sol_uint256_t((func_user_tokens).v));
  {
    (timestamp).v;
    (value).v;
    (func_user_recipient).v;
    sol_emit("TokenPurchase(now, msg.value, recipient)");
  }
  if (!(sol_send(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
                 (self)->model_address, &((self)->model_balance),
                 Init_sol_address_t((self->user_beneficiary).v),
                 Init_sol_uint256_t((value).v)))) {
    sol_require(0, "Revert.");
  }
}
void MRVToken_Method_createTokens(struct MRVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_model_recipient) {
  MRVToken_Method_checkOpenTimer(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  MRVToken_Method_checkCloseTimer(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  if ((self->user_crowdsaleEnded).v)
    sol_require(0, "Revert.");
  if (!((self->user_crowdsaleStarted).v))
    sol_require(0, "Revert.");
  MRVToken_Method_1_createTokens(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin,
                                 func_model_recipient);
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(44, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(45, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct MRVToken contract_1;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (((contract_1).user_beneficiary).v) = (0);
  (((contract_1).user___owner).v) = (0);
  smartace_log("[Initializing contract_1]");
  if (GET_ND_RANGE(48, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(46, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(47, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(49, 2, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_MRVToken(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(GET_ND_RANGE(50, 0, 7, "MRVToken:sendProceedsTo")),
        Init_sol_address_t(GET_ND_RANGE(51, 0, 7, "MRVToken:sendTokensTo")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_uint256_t last = contract_1.user_maxCrowdsaleSupplyInWholeTokens;
    if (sol_is_using_reps()) {
      uint64_t map_id;
      (map_id) = (GET_ND_RANGE(54, 0, 3, "map"));
      switch (map_id) {
      case 0: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(52, 0, 6, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_2).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_3).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_4).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_5).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_6).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_7).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_1(((contract_1).user_decimals).v,
                      ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
                      ((contract_1).user_crowdsaleStarted).v,
                      ((contract_1).user_crowdsaleEnded).v,
                      ((contract_1).user_openTimer).v,
                      ((contract_1).user_closeTimer).v,
                      ((contract_1).user___totalSupply).v, v0));
        break;
      }
      case 1: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(53, 0, 60, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_2).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_3).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_4).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_5).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_6).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_7).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_2).v);
          break;
        }
        case 7: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_3).v);
          break;
        }
        case 8: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_4).v);
          break;
        }
        case 9: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_5).v);
          break;
        }
        case 10: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_6).v);
          break;
        }
        case 11: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_7).v);
          break;
        }
        case 12: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_0).v);
          break;
        }
        case 13: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_1).v);
          break;
        }
        case 14: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_2).v);
          break;
        }
        case 15: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_3).v);
          break;
        }
        case 16: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_4).v);
          break;
        }
        case 17: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_5).v);
          break;
        }
        case 18: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_6).v);
          break;
        }
        case 19: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_7).v);
          break;
        }
        case 20: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_0).v);
          break;
        }
        case 21: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_1).v);
          break;
        }
        case 22: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_2).v);
          break;
        }
        case 23: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_3).v);
          break;
        }
        case 24: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_4).v);
          break;
        }
        case 25: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_5).v);
          break;
        }
        case 26: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_6).v);
          break;
        }
        case 27: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_7).v);
          break;
        }
        case 28: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_0).v);
          break;
        }
        case 29: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_1).v);
          break;
        }
        case 30: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_2).v);
          break;
        }
        case 31: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_3).v);
          break;
        }
        case 32: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_4).v);
          break;
        }
        case 33: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_5).v);
          break;
        }
        case 34: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_6).v);
          break;
        }
        case 35: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_7).v);
          break;
        }
        case 36: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_0).v);
          break;
        }
        case 37: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_1).v);
          break;
        }
        case 38: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_2).v);
          break;
        }
        case 39: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_3).v);
          break;
        }
        case 40: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_4).v);
          break;
        }
        case 41: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_5).v);
          break;
        }
        case 42: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_6).v);
          break;
        }
        case 43: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_7).v);
          break;
        }
        case 44: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_0).v);
          break;
        }
        case 45: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_1).v);
          break;
        }
        case 46: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_2).v);
          break;
        }
        case 47: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_3).v);
          break;
        }
        case 48: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_4).v);
          break;
        }
        case 49: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_5).v);
          break;
        }
        case 50: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_6).v);
          break;
        }
        case 51: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_7).v);
          break;
        }
        case 52: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_0).v);
          break;
        }
        case 53: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_1).v);
          break;
        }
        case 54: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_2).v);
          break;
        }
        case 55: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_3).v);
          break;
        }
        case 56: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_4).v);
          break;
        }
        case 57: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_5).v);
          break;
        }
        case 58: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_6).v);
          break;
        }
        case 59: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_7).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_2(((contract_1).user_decimals).v,
                      ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
                      ((contract_1).user_crowdsaleStarted).v,
                      ((contract_1).user_crowdsaleEnded).v,
                      ((contract_1).user_openTimer).v,
                      ((contract_1).user_closeTimer).v,
                      ((contract_1).user___totalSupply).v, v0));
        break;
      }
      default: {
      }
      }
    }
    if (sol_is_using_reps()) {
      (((contract_1).user___balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "MRVToken::_balances::_2")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_2).v));
      (((contract_1).user___balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(56, 256, "MRVToken::_balances::_3")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_3).v));
      (((contract_1).user___balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(57, 256, "MRVToken::_balances::_4")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_4).v));
      (((contract_1).user___balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(58, 256, "MRVToken::_balances::_5")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_5).v));
      (((contract_1).user___balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(59, 256, "MRVToken::_balances::_6")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_6).v));
      (((contract_1).user___balances).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(60, 256, "MRVToken::_balances::_7")));
      assume(Inv_1(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___balances).data_7).v));
      (((contract_1).user___allowed).data_0_2) = (Init_sol_uint256_t(
          GET_ND_UINT(61, 256, "MRVToken::_allowed::_0_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_2).v));
      (((contract_1).user___allowed).data_0_3) = (Init_sol_uint256_t(
          GET_ND_UINT(62, 256, "MRVToken::_allowed::_0_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_3).v));
      (((contract_1).user___allowed).data_0_4) = (Init_sol_uint256_t(
          GET_ND_UINT(63, 256, "MRVToken::_allowed::_0_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_4).v));
      (((contract_1).user___allowed).data_0_5) = (Init_sol_uint256_t(
          GET_ND_UINT(64, 256, "MRVToken::_allowed::_0_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_5).v));
      (((contract_1).user___allowed).data_0_6) = (Init_sol_uint256_t(
          GET_ND_UINT(65, 256, "MRVToken::_allowed::_0_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_6).v));
      (((contract_1).user___allowed).data_0_7) = (Init_sol_uint256_t(
          GET_ND_UINT(66, 256, "MRVToken::_allowed::_0_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_0_7).v));
      (((contract_1).user___allowed).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(67, 256, "MRVToken::_allowed::_1_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_2).v));
      (((contract_1).user___allowed).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(68, 256, "MRVToken::_allowed::_1_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_3).v));
      (((contract_1).user___allowed).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(69, 256, "MRVToken::_allowed::_1_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_4).v));
      (((contract_1).user___allowed).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(70, 256, "MRVToken::_allowed::_1_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_5).v));
      (((contract_1).user___allowed).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(71, 256, "MRVToken::_allowed::_1_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_6).v));
      (((contract_1).user___allowed).data_1_7) = (Init_sol_uint256_t(
          GET_ND_UINT(72, 256, "MRVToken::_allowed::_1_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_1_7).v));
      (((contract_1).user___allowed).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(73, 256, "MRVToken::_allowed::_2_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_0).v));
      (((contract_1).user___allowed).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(74, 256, "MRVToken::_allowed::_2_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_1).v));
      (((contract_1).user___allowed).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(75, 256, "MRVToken::_allowed::_2_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_2).v));
      (((contract_1).user___allowed).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(76, 256, "MRVToken::_allowed::_2_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_3).v));
      (((contract_1).user___allowed).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(77, 256, "MRVToken::_allowed::_2_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_4).v));
      (((contract_1).user___allowed).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(78, 256, "MRVToken::_allowed::_2_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_5).v));
      (((contract_1).user___allowed).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(79, 256, "MRVToken::_allowed::_2_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_6).v));
      (((contract_1).user___allowed).data_2_7) = (Init_sol_uint256_t(
          GET_ND_UINT(80, 256, "MRVToken::_allowed::_2_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_2_7).v));
      (((contract_1).user___allowed).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(81, 256, "MRVToken::_allowed::_3_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_0).v));
      (((contract_1).user___allowed).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(82, 256, "MRVToken::_allowed::_3_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_1).v));
      (((contract_1).user___allowed).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(83, 256, "MRVToken::_allowed::_3_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_2).v));
      (((contract_1).user___allowed).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "MRVToken::_allowed::_3_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_3).v));
      (((contract_1).user___allowed).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(85, 256, "MRVToken::_allowed::_3_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_4).v));
      (((contract_1).user___allowed).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(86, 256, "MRVToken::_allowed::_3_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_5).v));
      (((contract_1).user___allowed).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(87, 256, "MRVToken::_allowed::_3_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_6).v));
      (((contract_1).user___allowed).data_3_7) = (Init_sol_uint256_t(
          GET_ND_UINT(88, 256, "MRVToken::_allowed::_3_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_3_7).v));
      (((contract_1).user___allowed).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(89, 256, "MRVToken::_allowed::_4_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_0).v));
      (((contract_1).user___allowed).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(90, 256, "MRVToken::_allowed::_4_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_1).v));
      (((contract_1).user___allowed).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(91, 256, "MRVToken::_allowed::_4_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_2).v));
      (((contract_1).user___allowed).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(92, 256, "MRVToken::_allowed::_4_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_3).v));
      (((contract_1).user___allowed).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(93, 256, "MRVToken::_allowed::_4_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_4).v));
      (((contract_1).user___allowed).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(94, 256, "MRVToken::_allowed::_4_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_5).v));
      (((contract_1).user___allowed).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(95, 256, "MRVToken::_allowed::_4_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_6).v));
      (((contract_1).user___allowed).data_4_7) = (Init_sol_uint256_t(
          GET_ND_UINT(96, 256, "MRVToken::_allowed::_4_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_4_7).v));
      (((contract_1).user___allowed).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(97, 256, "MRVToken::_allowed::_5_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_0).v));
      (((contract_1).user___allowed).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(98, 256, "MRVToken::_allowed::_5_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_1).v));
      (((contract_1).user___allowed).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(99, 256, "MRVToken::_allowed::_5_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_2).v));
      (((contract_1).user___allowed).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "MRVToken::_allowed::_5_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_3).v));
      (((contract_1).user___allowed).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "MRVToken::_allowed::_5_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_4).v));
      (((contract_1).user___allowed).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "MRVToken::_allowed::_5_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_5).v));
      (((contract_1).user___allowed).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "MRVToken::_allowed::_5_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_6).v));
      (((contract_1).user___allowed).data_5_7) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "MRVToken::_allowed::_5_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_5_7).v));
      (((contract_1).user___allowed).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(105, 256, "MRVToken::_allowed::_6_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_0).v));
      (((contract_1).user___allowed).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(106, 256, "MRVToken::_allowed::_6_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_1).v));
      (((contract_1).user___allowed).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(107, 256, "MRVToken::_allowed::_6_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_2).v));
      (((contract_1).user___allowed).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(108, 256, "MRVToken::_allowed::_6_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_3).v));
      (((contract_1).user___allowed).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(109, 256, "MRVToken::_allowed::_6_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_4).v));
      (((contract_1).user___allowed).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(110, 256, "MRVToken::_allowed::_6_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_5).v));
      (((contract_1).user___allowed).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(111, 256, "MRVToken::_allowed::_6_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_6).v));
      (((contract_1).user___allowed).data_6_7) = (Init_sol_uint256_t(
          GET_ND_UINT(112, 256, "MRVToken::_allowed::_6_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_6_7).v));
      (((contract_1).user___allowed).data_7_0) = (Init_sol_uint256_t(
          GET_ND_UINT(113, 256, "MRVToken::_allowed::_7_0")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_0).v));
      (((contract_1).user___allowed).data_7_1) = (Init_sol_uint256_t(
          GET_ND_UINT(114, 256, "MRVToken::_allowed::_7_1")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_1).v));
      (((contract_1).user___allowed).data_7_2) = (Init_sol_uint256_t(
          GET_ND_UINT(115, 256, "MRVToken::_allowed::_7_2")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_2).v));
      (((contract_1).user___allowed).data_7_3) = (Init_sol_uint256_t(
          GET_ND_UINT(116, 256, "MRVToken::_allowed::_7_3")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_3).v));
      (((contract_1).user___allowed).data_7_4) = (Init_sol_uint256_t(
          GET_ND_UINT(117, 256, "MRVToken::_allowed::_7_4")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_4).v));
      (((contract_1).user___allowed).data_7_5) = (Init_sol_uint256_t(
          GET_ND_UINT(118, 256, "MRVToken::_allowed::_7_5")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_5).v));
      (((contract_1).user___allowed).data_7_6) = (Init_sol_uint256_t(
          GET_ND_UINT(119, 256, "MRVToken::_allowed::_7_6")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_6).v));
      (((contract_1).user___allowed).data_7_7) = (Init_sol_uint256_t(
          GET_ND_UINT(120, 256, "MRVToken::_allowed::_7_7")));
      assume(Inv_2(
          ((contract_1).user_decimals).v,
          ((contract_1).user_maxCrowdsaleSupplyInWholeTokens).v,
          ((contract_1).user_crowdsaleStarted).v,
          ((contract_1).user_crowdsaleEnded).v, ((contract_1).user_openTimer).v,
          ((contract_1).user_closeTimer).v, ((contract_1).user___totalSupply).v,
          (((contract_1).user___allowed).data_7_7).v));
    }
    if (GET_ND_RANGE(123, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(121, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(122, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(124, 0, 27, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling openTimerElapsed() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_openTimerElapsed(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling closeTimerElapsed() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_closeTimerElapsed(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling checkOpenTimer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_checkOpenTimer(&(contract_1), sender, value, blocknum,
                                     timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling checkCloseTimer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_checkCloseTimer(&(contract_1), sender, value, blocknum,
                                      timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling isCrowdsaleActive() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_isCrowdsaleActive(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling setMaxSupply(newMaxInWholeTokens) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg_newMaxInWholeTokens =
          Init_sol_uint256_t(GET_ND_UINT(7, 256, "newMaxInWholeTokens"));
      MRVToken_Method_setMaxSupply(&(contract_1), sender, value, blocknum,
                                   timestamp, paid, sender,
                                   arg_newMaxInWholeTokens);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling openCrowdsale() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_openCrowdsale(&(contract_1), sender, value, blocknum,
                                    timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log(
          "[Calling setCrowdsaleOpenTimerFor(minutesFromNow) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg_minutesFromNow =
          Init_sol_uint256_t(GET_ND_UINT(10, 256, "minutesFromNow"));
      MRVToken_Method_setCrowdsaleOpenTimerFor(&(contract_1), sender, value,
                                               blocknum, timestamp, paid,
                                               sender, arg_minutesFromNow);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling clearCrowdsaleOpenTimer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_clearCrowdsaleOpenTimer(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log(
          "[Calling setCrowdsaleCloseTimerFor(minutesFromNow) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg_minutesFromNow =
          Init_sol_uint256_t(GET_ND_UINT(13, 256, "minutesFromNow"));
      MRVToken_Method_setCrowdsaleCloseTimerFor(&(contract_1), sender, value,
                                                blocknum, timestamp, paid,
                                                sender, arg_minutesFromNow);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling clearCrowdsaleCloseTimer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_clearCrowdsaleCloseTimer(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling closeCrowdsale() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(15, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_closeCrowdsale(&(contract_1), sender, value, blocknum,
                                     timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling setDecimals(newDecimals) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint8_t arg_newDecimals =
          Init_sol_uint8_t(GET_ND_UINT(17, 8, "newDecimals"));
      MRVToken_Method_setDecimals(&(contract_1), sender, value, blocknum,
                                  timestamp, paid, sender, arg_newDecimals);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling reclaimEther() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MRVToken_Method_reclaimEther(&(contract_1), sender, value, blocknum,
                                   timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling increaseAllowance(0, 0) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(19, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t placeholder_0;
      sol_uint256_t placeholder_1;
      MRVToken_Method_increaseAllowance(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender, placeholder_0,
                                        placeholder_1);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling decreaseAllowance(0, 0) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t placeholder_0;
      sol_uint256_t placeholder_1;
      MRVToken_Method_decreaseAllowance(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender, placeholder_0,
                                        placeholder_1);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling owner() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Ownable_Method_For_MRVToken_owner(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 17: {
      smartace_log("[Calling isOwner() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(22, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Ownable_Method_For_MRVToken_isOwner(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 18: {
      smartace_log("[Calling renounceOwnership() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Ownable_Method_For_MRVToken_renounceOwnership(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 19: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(24, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(25, 0, 7, "newOwner"));
      Ownable_Method_For_MRVToken_transferOwnership(&(contract_1), sender,
                                                    value, blocknum, timestamp,
                                                    paid, sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 20: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(26, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_For_MRVToken_totalSupply(&(contract_1), sender, value,
                                            blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 21: {
      smartace_log("[Calling balanceOf(owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 7, "owner"));
      ERC20_Method_For_MRVToken_balanceOf(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 22: {
      smartace_log("[Calling allowance(owner, spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(29, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(30, 0, 7, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(31, 0, 7, "spender"));
      ERC20_Method_For_MRVToken_allowance(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 23: {
      smartace_log("[Calling transfer(to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(32, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(33, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(34, 256, "value"));
      ERC20_Method_For_MRVToken_transfer(&(contract_1), sender, value, blocknum,
                                         timestamp, paid, sender, arg_to,
                                         arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 24: {
      smartace_log("[Calling approve(spender, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(35, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(36, 0, 7, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(37, 256, "value"));
      ERC20_Method_For_MRVToken_approve(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender, arg_spender,
                                        arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 25: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(38, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(39, 0, 7, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(40, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(41, 256, "value"));
      ERC20_Method_For_MRVToken_transferFrom(&(contract_1), sender, value,
                                             blocknum, timestamp, paid, sender,
                                             arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 26: {
      smartace_log("[Calling () on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(42, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(43, 256, "value"));
      MRVToken_Fallback(&(contract_1), sender, value, blocknum, timestamp, paid,
                        sender);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
    if (contract_1.user_crowdsaleStarted.v != 0)
    {
      sol_assert(last.v == contract_1.user_maxCrowdsaleSupplyInWholeTokens.v, 0);
    }
  }
}