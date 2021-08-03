#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
struct Map_1 {
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
struct Map_2 {
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_0_6;
  sol_uint256_t data_0_7;
  sol_uint256_t data_0_8;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_1_7;
  sol_uint256_t data_1_8;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_2_7;
  sol_uint256_t data_2_8;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_3_7;
  sol_uint256_t data_3_8;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_4_7;
  sol_uint256_t data_4_8;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_5_7;
  sol_uint256_t data_5_8;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
  sol_uint256_t data_6_7;
  sol_uint256_t data_6_8;
  sol_uint256_t data_7_0;
  sol_uint256_t data_7_1;
  sol_uint256_t data_7_2;
  sol_uint256_t data_7_3;
  sol_uint256_t data_7_4;
  sol_uint256_t data_7_5;
  sol_uint256_t data_7_6;
  sol_uint256_t data_7_7;
  sol_uint256_t data_7_8;
  sol_uint256_t data_8_0;
  sol_uint256_t data_8_1;
  sol_uint256_t data_8_2;
  sol_uint256_t data_8_3;
  sol_uint256_t data_8_4;
  sol_uint256_t data_8_5;
  sol_uint256_t data_8_6;
  sol_uint256_t data_8_7;
  sol_uint256_t data_8_8;
};
struct ERC20 {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Map_1 user___balances;
  struct Map_2 user___allowed;
  sol_uint256_t user___totalSupply;
};
struct Alchemist {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct ERC20 user_LEAD;
  struct ERC20 user_GOLD;
};
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
void ERC20_Method___transfer(struct ERC20 *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_from,
                             sol_address_t func_user_to,
                             sol_uint256_t func_user_value);
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
void Alchemist_Constructor(struct Alchemist *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  Init_ERC20(&(self->user_LEAD), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin);
  Init_ERC20(&(self->user_GOLD), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin);
}
void Init_Alchemist(struct Alchemist *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Alchemist_Constructor(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void Alchemist_Method_transmute(struct Alchemist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_uint256_t func_user___mass) {
  sol_require((ERC20_Method_transferFrom(
                   &(self->user_LEAD), (self)->model_address,
                   Init_sol_uint256_t(0), blocknum, timestamp,
                   Init_sol_bool_t(1), origin, Init_sol_address_t((sender).v),
                   Init_sol_address_t(((self)->model_address).v),
                   Init_sol_uint256_t((func_user___mass).v)))
                  .v,
              "LEAD transfer failed");
  if ((((func_user___mass).v) % (2)) == (0)) {
    return;
  }
  sol_require((ERC20_Method_transfer(&(self->user_GOLD), (self)->model_address,
                                     Init_sol_uint256_t(0), blocknum, timestamp,
                                     Init_sol_bool_t(1), origin,
                                     Init_sol_address_t((sender).v),
                                     Init_sol_uint256_t((func_user___mass).v)))
                  .v,
              "GOLD transfer failed");
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
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
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
  ((tmp).data_0_8) = (Init_sol_uint256_t(0));
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_1_7) = (Init_sol_uint256_t(0));
  ((tmp).data_1_8) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_7) = (Init_sol_uint256_t(0));
  ((tmp).data_2_8) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_7) = (Init_sol_uint256_t(0));
  ((tmp).data_3_8) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_7) = (Init_sol_uint256_t(0));
  ((tmp).data_4_8) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_7) = (Init_sol_uint256_t(0));
  ((tmp).data_5_8) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_7) = (Init_sol_uint256_t(0));
  ((tmp).data_6_8) = (Init_sol_uint256_t(0));
  ((tmp).data_7_0) = (Init_sol_uint256_t(0));
  ((tmp).data_7_1) = (Init_sol_uint256_t(0));
  ((tmp).data_7_2) = (Init_sol_uint256_t(0));
  ((tmp).data_7_3) = (Init_sol_uint256_t(0));
  ((tmp).data_7_4) = (Init_sol_uint256_t(0));
  ((tmp).data_7_5) = (Init_sol_uint256_t(0));
  ((tmp).data_7_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7_7) = (Init_sol_uint256_t(0));
  ((tmp).data_7_8) = (Init_sol_uint256_t(0));
  ((tmp).data_8_0) = (Init_sol_uint256_t(0));
  ((tmp).data_8_1) = (Init_sol_uint256_t(0));
  ((tmp).data_8_2) = (Init_sol_uint256_t(0));
  ((tmp).data_8_3) = (Init_sol_uint256_t(0));
  ((tmp).data_8_4) = (Init_sol_uint256_t(0));
  ((tmp).data_8_5) = (Init_sol_uint256_t(0));
  ((tmp).data_8_6) = (Init_sol_uint256_t(0));
  ((tmp).data_8_7) = (Init_sol_uint256_t(0));
  ((tmp).data_8_8) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((9) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((9) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((8) == ((key_0).v)) {
      if ((8) == ((key_1).v))
        return (arr)->data_8_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_8_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_8_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_8_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_8_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_8_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_8_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_8_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_8_0;
    } else if ((7) == ((key_0).v)) {
      if ((8) == ((key_1).v))
        return (arr)->data_7_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_6_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_5_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_4_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_3_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_2_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_1_8;
      else if ((7) == ((key_1).v))
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
      if ((8) == ((key_1).v))
        return (arr)->data_0_8;
      else if ((7) == ((key_1).v))
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
    sol_assert((9) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((9) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((8) == ((key_0).v)) {
      if ((8) == ((key_1).v)) {
        ((arr)->data_8_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_8_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_8_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_8_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_8_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_8_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_8_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_8_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_8_0) = (dat);
      }
    } else if ((7) == ((key_0).v)) {
      if ((8) == ((key_1).v)) {
        ((arr)->data_7_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_6_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_5_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_4_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_3_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_2_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_1_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
      if ((8) == ((key_1).v)) {
        ((arr)->data_0_8) = (dat);
      } else if ((7) == ((key_1).v)) {
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
void Init_ERC20(struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowed) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
sol_uint256_t ERC20_Method_totalSupply(struct ERC20 *self, sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_balanceOf(struct ERC20 *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_user_owner) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_owner).v)))
            .v);
  }
}
sol_uint256_t ERC20_Method_allowance(struct ERC20 *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_user_owner,
                                     sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowed),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_transfer(struct ERC20 *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_address_t func_user_to,
                                 sol_uint256_t func_user_value) {
  ERC20_Method___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_approve(struct ERC20 *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_user_spender,
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
sol_bool_t ERC20_Method_transferFrom(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
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
  ERC20_Method___transfer(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin,
                          Init_sol_address_t((func_user_from).v),
                          Init_sol_address_t((func_user_to).v),
                          Init_sol_uint256_t((func_user_value).v));
  {
    (func_user_from).v;
    (sender).v;
    (Read_Map_2(&(self->user___allowed), Init_sol_address_t((func_user_from).v),
                Init_sol_address_t((sender).v)))
        .v;
    sol_emit("Approval(from, msg.sender, _allowed[from][msg.sender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_increaseAllowance(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue) {
  sol_require(((func_user_spender).v) != (g_literal_address_0), 0);
  Write_Map_2(
      &(self->user___allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_addedValue).v)))
              .v));
  {
    (sender).v;
    (func_user_spender).v;
    (Read_Map_2(&(self->user___allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user_spender).v)))
        .v;
    sol_emit("Approval(msg.sender, spender, _allowed[msg.sender][spender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_decreaseAllowance(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue) {
  sol_require(((func_user_spender).v) != (g_literal_address_0), 0);
  Write_Map_2(
      &(self->user___allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_subtractedValue).v)))
              .v));
  {
    (sender).v;
    (func_user_spender).v;
    (Read_Map_2(&(self->user___allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user_spender).v)))
        .v;
    sol_emit("Approval(msg.sender, spender, _allowed[msg.sender][spender])");
  }
  { return Init_sol_bool_t(1); }
}
void ERC20_Method___transfer(struct ERC20 *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_from,
                             sol_address_t func_user_to,
                             sol_uint256_t func_user_value) {
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
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(46, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(47, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Alchemist contract_1;
  struct ERC20 *contract_2;
  struct ERC20 *contract_3;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_LEAD));
  (((contract_2)->model_address).v) = (2);
  (contract_3) = (&((contract_1).user_GOLD));
  (((contract_3)->model_address).v) = (3);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(50, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(48, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(49, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(51, 4, 9, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Alchemist(&(contract_1), sender, value, blocknum, timestamp, paid,
                   sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
    }
    if (sol_is_using_reps()) {
      (((contract_2)->user___balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(52, 256, "ERC20::_balances::_0")));
      (((contract_2)->user___balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(53, 256, "ERC20::_balances::_1")));
      (((contract_2)->user___balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(54, 256, "ERC20::_balances::_2")));
      (((contract_2)->user___balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "ERC20::_balances::_3")));
      (((contract_2)->user___balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(56, 256, "ERC20::_balances::_4")));
      (((contract_2)->user___balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(57, 256, "ERC20::_balances::_5")));
      (((contract_2)->user___balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(58, 256, "ERC20::_balances::_6")));
      (((contract_2)->user___balances).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(59, 256, "ERC20::_balances::_7")));
      (((contract_2)->user___balances).data_8) =
          (Init_sol_uint256_t(GET_ND_UINT(60, 256, "ERC20::_balances::_8")));
      (((contract_2)->user___allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(61, 256, "ERC20::_allowed::_0_0")));
      (((contract_2)->user___allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(62, 256, "ERC20::_allowed::_0_1")));
      (((contract_2)->user___allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(63, 256, "ERC20::_allowed::_0_2")));
      (((contract_2)->user___allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(64, 256, "ERC20::_allowed::_0_3")));
      (((contract_2)->user___allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(65, 256, "ERC20::_allowed::_0_4")));
      (((contract_2)->user___allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(66, 256, "ERC20::_allowed::_0_5")));
      (((contract_2)->user___allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(67, 256, "ERC20::_allowed::_0_6")));
      (((contract_2)->user___allowed).data_0_7) =
          (Init_sol_uint256_t(GET_ND_UINT(68, 256, "ERC20::_allowed::_0_7")));
      (((contract_2)->user___allowed).data_0_8) =
          (Init_sol_uint256_t(GET_ND_UINT(69, 256, "ERC20::_allowed::_0_8")));
      (((contract_2)->user___allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(70, 256, "ERC20::_allowed::_1_0")));
      (((contract_2)->user___allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(71, 256, "ERC20::_allowed::_1_1")));
      (((contract_2)->user___allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(72, 256, "ERC20::_allowed::_1_2")));
      (((contract_2)->user___allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(73, 256, "ERC20::_allowed::_1_3")));
      (((contract_2)->user___allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(74, 256, "ERC20::_allowed::_1_4")));
      (((contract_2)->user___allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(75, 256, "ERC20::_allowed::_1_5")));
      (((contract_2)->user___allowed).data_1_6) =
          (Init_sol_uint256_t(GET_ND_UINT(76, 256, "ERC20::_allowed::_1_6")));
      (((contract_2)->user___allowed).data_1_7) =
          (Init_sol_uint256_t(GET_ND_UINT(77, 256, "ERC20::_allowed::_1_7")));
      (((contract_2)->user___allowed).data_1_8) =
          (Init_sol_uint256_t(GET_ND_UINT(78, 256, "ERC20::_allowed::_1_8")));
      (((contract_2)->user___allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(79, 256, "ERC20::_allowed::_2_0")));
      (((contract_2)->user___allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(80, 256, "ERC20::_allowed::_2_1")));
      (((contract_2)->user___allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(81, 256, "ERC20::_allowed::_2_2")));
      (((contract_2)->user___allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(82, 256, "ERC20::_allowed::_2_3")));
      (((contract_2)->user___allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(83, 256, "ERC20::_allowed::_2_4")));
      (((contract_2)->user___allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(84, 256, "ERC20::_allowed::_2_5")));
      (((contract_2)->user___allowed).data_2_6) =
          (Init_sol_uint256_t(GET_ND_UINT(85, 256, "ERC20::_allowed::_2_6")));
      (((contract_2)->user___allowed).data_2_7) =
          (Init_sol_uint256_t(GET_ND_UINT(86, 256, "ERC20::_allowed::_2_7")));
      (((contract_2)->user___allowed).data_2_8) =
          (Init_sol_uint256_t(GET_ND_UINT(87, 256, "ERC20::_allowed::_2_8")));
      (((contract_2)->user___allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(88, 256, "ERC20::_allowed::_3_0")));
      (((contract_2)->user___allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(89, 256, "ERC20::_allowed::_3_1")));
      (((contract_2)->user___allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(90, 256, "ERC20::_allowed::_3_2")));
      (((contract_2)->user___allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(91, 256, "ERC20::_allowed::_3_3")));
      (((contract_2)->user___allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(92, 256, "ERC20::_allowed::_3_4")));
      (((contract_2)->user___allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(93, 256, "ERC20::_allowed::_3_5")));
      (((contract_2)->user___allowed).data_3_6) =
          (Init_sol_uint256_t(GET_ND_UINT(94, 256, "ERC20::_allowed::_3_6")));
      (((contract_2)->user___allowed).data_3_7) =
          (Init_sol_uint256_t(GET_ND_UINT(95, 256, "ERC20::_allowed::_3_7")));
      (((contract_2)->user___allowed).data_3_8) =
          (Init_sol_uint256_t(GET_ND_UINT(96, 256, "ERC20::_allowed::_3_8")));
      (((contract_2)->user___allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(97, 256, "ERC20::_allowed::_4_0")));
      (((contract_2)->user___allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(98, 256, "ERC20::_allowed::_4_1")));
      (((contract_2)->user___allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(99, 256, "ERC20::_allowed::_4_2")));
      (((contract_2)->user___allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(100, 256, "ERC20::_allowed::_4_3")));
      (((contract_2)->user___allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(101, 256, "ERC20::_allowed::_4_4")));
      (((contract_2)->user___allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(102, 256, "ERC20::_allowed::_4_5")));
      (((contract_2)->user___allowed).data_4_6) =
          (Init_sol_uint256_t(GET_ND_UINT(103, 256, "ERC20::_allowed::_4_6")));
      (((contract_2)->user___allowed).data_4_7) =
          (Init_sol_uint256_t(GET_ND_UINT(104, 256, "ERC20::_allowed::_4_7")));
      (((contract_2)->user___allowed).data_4_8) =
          (Init_sol_uint256_t(GET_ND_UINT(105, 256, "ERC20::_allowed::_4_8")));
      (((contract_2)->user___allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(106, 256, "ERC20::_allowed::_5_0")));
      (((contract_2)->user___allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(107, 256, "ERC20::_allowed::_5_1")));
      (((contract_2)->user___allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(108, 256, "ERC20::_allowed::_5_2")));
      (((contract_2)->user___allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(109, 256, "ERC20::_allowed::_5_3")));
      (((contract_2)->user___allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(110, 256, "ERC20::_allowed::_5_4")));
      (((contract_2)->user___allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(111, 256, "ERC20::_allowed::_5_5")));
      (((contract_2)->user___allowed).data_5_6) =
          (Init_sol_uint256_t(GET_ND_UINT(112, 256, "ERC20::_allowed::_5_6")));
      (((contract_2)->user___allowed).data_5_7) =
          (Init_sol_uint256_t(GET_ND_UINT(113, 256, "ERC20::_allowed::_5_7")));
      (((contract_2)->user___allowed).data_5_8) =
          (Init_sol_uint256_t(GET_ND_UINT(114, 256, "ERC20::_allowed::_5_8")));
      (((contract_2)->user___allowed).data_6_0) =
          (Init_sol_uint256_t(GET_ND_UINT(115, 256, "ERC20::_allowed::_6_0")));
      (((contract_2)->user___allowed).data_6_1) =
          (Init_sol_uint256_t(GET_ND_UINT(116, 256, "ERC20::_allowed::_6_1")));
      (((contract_2)->user___allowed).data_6_2) =
          (Init_sol_uint256_t(GET_ND_UINT(117, 256, "ERC20::_allowed::_6_2")));
      (((contract_2)->user___allowed).data_6_3) =
          (Init_sol_uint256_t(GET_ND_UINT(118, 256, "ERC20::_allowed::_6_3")));
      (((contract_2)->user___allowed).data_6_4) =
          (Init_sol_uint256_t(GET_ND_UINT(119, 256, "ERC20::_allowed::_6_4")));
      (((contract_2)->user___allowed).data_6_5) =
          (Init_sol_uint256_t(GET_ND_UINT(120, 256, "ERC20::_allowed::_6_5")));
      (((contract_2)->user___allowed).data_6_6) =
          (Init_sol_uint256_t(GET_ND_UINT(121, 256, "ERC20::_allowed::_6_6")));
      (((contract_2)->user___allowed).data_6_7) =
          (Init_sol_uint256_t(GET_ND_UINT(122, 256, "ERC20::_allowed::_6_7")));
      (((contract_2)->user___allowed).data_6_8) =
          (Init_sol_uint256_t(GET_ND_UINT(123, 256, "ERC20::_allowed::_6_8")));
      (((contract_2)->user___allowed).data_7_0) =
          (Init_sol_uint256_t(GET_ND_UINT(124, 256, "ERC20::_allowed::_7_0")));
      (((contract_2)->user___allowed).data_7_1) =
          (Init_sol_uint256_t(GET_ND_UINT(125, 256, "ERC20::_allowed::_7_1")));
      (((contract_2)->user___allowed).data_7_2) =
          (Init_sol_uint256_t(GET_ND_UINT(126, 256, "ERC20::_allowed::_7_2")));
      (((contract_2)->user___allowed).data_7_3) =
          (Init_sol_uint256_t(GET_ND_UINT(127, 256, "ERC20::_allowed::_7_3")));
      (((contract_2)->user___allowed).data_7_4) =
          (Init_sol_uint256_t(GET_ND_UINT(128, 256, "ERC20::_allowed::_7_4")));
      (((contract_2)->user___allowed).data_7_5) =
          (Init_sol_uint256_t(GET_ND_UINT(129, 256, "ERC20::_allowed::_7_5")));
      (((contract_2)->user___allowed).data_7_6) =
          (Init_sol_uint256_t(GET_ND_UINT(130, 256, "ERC20::_allowed::_7_6")));
      (((contract_2)->user___allowed).data_7_7) =
          (Init_sol_uint256_t(GET_ND_UINT(131, 256, "ERC20::_allowed::_7_7")));
      (((contract_2)->user___allowed).data_7_8) =
          (Init_sol_uint256_t(GET_ND_UINT(132, 256, "ERC20::_allowed::_7_8")));
      (((contract_2)->user___allowed).data_8_0) =
          (Init_sol_uint256_t(GET_ND_UINT(133, 256, "ERC20::_allowed::_8_0")));
      (((contract_2)->user___allowed).data_8_1) =
          (Init_sol_uint256_t(GET_ND_UINT(134, 256, "ERC20::_allowed::_8_1")));
      (((contract_2)->user___allowed).data_8_2) =
          (Init_sol_uint256_t(GET_ND_UINT(135, 256, "ERC20::_allowed::_8_2")));
      (((contract_2)->user___allowed).data_8_3) =
          (Init_sol_uint256_t(GET_ND_UINT(136, 256, "ERC20::_allowed::_8_3")));
      (((contract_2)->user___allowed).data_8_4) =
          (Init_sol_uint256_t(GET_ND_UINT(137, 256, "ERC20::_allowed::_8_4")));
      (((contract_2)->user___allowed).data_8_5) =
          (Init_sol_uint256_t(GET_ND_UINT(138, 256, "ERC20::_allowed::_8_5")));
      (((contract_2)->user___allowed).data_8_6) =
          (Init_sol_uint256_t(GET_ND_UINT(139, 256, "ERC20::_allowed::_8_6")));
      (((contract_2)->user___allowed).data_8_7) =
          (Init_sol_uint256_t(GET_ND_UINT(140, 256, "ERC20::_allowed::_8_7")));
      (((contract_2)->user___allowed).data_8_8) =
          (Init_sol_uint256_t(GET_ND_UINT(141, 256, "ERC20::_allowed::_8_8")));
      (((contract_3)->user___balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(142, 256, "ERC20::_balances::_0")));
      (((contract_3)->user___balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(143, 256, "ERC20::_balances::_1")));
      (((contract_3)->user___balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(144, 256, "ERC20::_balances::_2")));
      (((contract_3)->user___balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(145, 256, "ERC20::_balances::_3")));
      (((contract_3)->user___balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(146, 256, "ERC20::_balances::_4")));
      (((contract_3)->user___balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(147, 256, "ERC20::_balances::_5")));
      (((contract_3)->user___balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(148, 256, "ERC20::_balances::_6")));
      (((contract_3)->user___balances).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(149, 256, "ERC20::_balances::_7")));
      (((contract_3)->user___balances).data_8) =
          (Init_sol_uint256_t(GET_ND_UINT(150, 256, "ERC20::_balances::_8")));
      (((contract_3)->user___allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(151, 256, "ERC20::_allowed::_0_0")));
      (((contract_3)->user___allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(152, 256, "ERC20::_allowed::_0_1")));
      (((contract_3)->user___allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(153, 256, "ERC20::_allowed::_0_2")));
      (((contract_3)->user___allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(154, 256, "ERC20::_allowed::_0_3")));
      (((contract_3)->user___allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(155, 256, "ERC20::_allowed::_0_4")));
      (((contract_3)->user___allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(156, 256, "ERC20::_allowed::_0_5")));
      (((contract_3)->user___allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(157, 256, "ERC20::_allowed::_0_6")));
      (((contract_3)->user___allowed).data_0_7) =
          (Init_sol_uint256_t(GET_ND_UINT(158, 256, "ERC20::_allowed::_0_7")));
      (((contract_3)->user___allowed).data_0_8) =
          (Init_sol_uint256_t(GET_ND_UINT(159, 256, "ERC20::_allowed::_0_8")));
      (((contract_3)->user___allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(160, 256, "ERC20::_allowed::_1_0")));
      (((contract_3)->user___allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(161, 256, "ERC20::_allowed::_1_1")));
      (((contract_3)->user___allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(162, 256, "ERC20::_allowed::_1_2")));
      (((contract_3)->user___allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(163, 256, "ERC20::_allowed::_1_3")));
      (((contract_3)->user___allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(164, 256, "ERC20::_allowed::_1_4")));
      (((contract_3)->user___allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(165, 256, "ERC20::_allowed::_1_5")));
      (((contract_3)->user___allowed).data_1_6) =
          (Init_sol_uint256_t(GET_ND_UINT(166, 256, "ERC20::_allowed::_1_6")));
      (((contract_3)->user___allowed).data_1_7) =
          (Init_sol_uint256_t(GET_ND_UINT(167, 256, "ERC20::_allowed::_1_7")));
      (((contract_3)->user___allowed).data_1_8) =
          (Init_sol_uint256_t(GET_ND_UINT(168, 256, "ERC20::_allowed::_1_8")));
      (((contract_3)->user___allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(169, 256, "ERC20::_allowed::_2_0")));
      (((contract_3)->user___allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(170, 256, "ERC20::_allowed::_2_1")));
      (((contract_3)->user___allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(171, 256, "ERC20::_allowed::_2_2")));
      (((contract_3)->user___allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(172, 256, "ERC20::_allowed::_2_3")));
      (((contract_3)->user___allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(173, 256, "ERC20::_allowed::_2_4")));
      (((contract_3)->user___allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(174, 256, "ERC20::_allowed::_2_5")));
      (((contract_3)->user___allowed).data_2_6) =
          (Init_sol_uint256_t(GET_ND_UINT(175, 256, "ERC20::_allowed::_2_6")));
      (((contract_3)->user___allowed).data_2_7) =
          (Init_sol_uint256_t(GET_ND_UINT(176, 256, "ERC20::_allowed::_2_7")));
      (((contract_3)->user___allowed).data_2_8) =
          (Init_sol_uint256_t(GET_ND_UINT(177, 256, "ERC20::_allowed::_2_8")));
      (((contract_3)->user___allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(178, 256, "ERC20::_allowed::_3_0")));
      (((contract_3)->user___allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(179, 256, "ERC20::_allowed::_3_1")));
      (((contract_3)->user___allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(180, 256, "ERC20::_allowed::_3_2")));
      (((contract_3)->user___allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(181, 256, "ERC20::_allowed::_3_3")));
      (((contract_3)->user___allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(182, 256, "ERC20::_allowed::_3_4")));
      (((contract_3)->user___allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(183, 256, "ERC20::_allowed::_3_5")));
      (((contract_3)->user___allowed).data_3_6) =
          (Init_sol_uint256_t(GET_ND_UINT(184, 256, "ERC20::_allowed::_3_6")));
      (((contract_3)->user___allowed).data_3_7) =
          (Init_sol_uint256_t(GET_ND_UINT(185, 256, "ERC20::_allowed::_3_7")));
      (((contract_3)->user___allowed).data_3_8) =
          (Init_sol_uint256_t(GET_ND_UINT(186, 256, "ERC20::_allowed::_3_8")));
      (((contract_3)->user___allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(187, 256, "ERC20::_allowed::_4_0")));
      (((contract_3)->user___allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(188, 256, "ERC20::_allowed::_4_1")));
      (((contract_3)->user___allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(189, 256, "ERC20::_allowed::_4_2")));
      (((contract_3)->user___allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(190, 256, "ERC20::_allowed::_4_3")));
      (((contract_3)->user___allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(191, 256, "ERC20::_allowed::_4_4")));
      (((contract_3)->user___allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(192, 256, "ERC20::_allowed::_4_5")));
      (((contract_3)->user___allowed).data_4_6) =
          (Init_sol_uint256_t(GET_ND_UINT(193, 256, "ERC20::_allowed::_4_6")));
      (((contract_3)->user___allowed).data_4_7) =
          (Init_sol_uint256_t(GET_ND_UINT(194, 256, "ERC20::_allowed::_4_7")));
      (((contract_3)->user___allowed).data_4_8) =
          (Init_sol_uint256_t(GET_ND_UINT(195, 256, "ERC20::_allowed::_4_8")));
      (((contract_3)->user___allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(196, 256, "ERC20::_allowed::_5_0")));
      (((contract_3)->user___allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(197, 256, "ERC20::_allowed::_5_1")));
      (((contract_3)->user___allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(198, 256, "ERC20::_allowed::_5_2")));
      (((contract_3)->user___allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(199, 256, "ERC20::_allowed::_5_3")));
      (((contract_3)->user___allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(200, 256, "ERC20::_allowed::_5_4")));
      (((contract_3)->user___allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(201, 256, "ERC20::_allowed::_5_5")));
      (((contract_3)->user___allowed).data_5_6) =
          (Init_sol_uint256_t(GET_ND_UINT(202, 256, "ERC20::_allowed::_5_6")));
      (((contract_3)->user___allowed).data_5_7) =
          (Init_sol_uint256_t(GET_ND_UINT(203, 256, "ERC20::_allowed::_5_7")));
      (((contract_3)->user___allowed).data_5_8) =
          (Init_sol_uint256_t(GET_ND_UINT(204, 256, "ERC20::_allowed::_5_8")));
      (((contract_3)->user___allowed).data_6_0) =
          (Init_sol_uint256_t(GET_ND_UINT(205, 256, "ERC20::_allowed::_6_0")));
      (((contract_3)->user___allowed).data_6_1) =
          (Init_sol_uint256_t(GET_ND_UINT(206, 256, "ERC20::_allowed::_6_1")));
      (((contract_3)->user___allowed).data_6_2) =
          (Init_sol_uint256_t(GET_ND_UINT(207, 256, "ERC20::_allowed::_6_2")));
      (((contract_3)->user___allowed).data_6_3) =
          (Init_sol_uint256_t(GET_ND_UINT(208, 256, "ERC20::_allowed::_6_3")));
      (((contract_3)->user___allowed).data_6_4) =
          (Init_sol_uint256_t(GET_ND_UINT(209, 256, "ERC20::_allowed::_6_4")));
      (((contract_3)->user___allowed).data_6_5) =
          (Init_sol_uint256_t(GET_ND_UINT(210, 256, "ERC20::_allowed::_6_5")));
      (((contract_3)->user___allowed).data_6_6) =
          (Init_sol_uint256_t(GET_ND_UINT(211, 256, "ERC20::_allowed::_6_6")));
      (((contract_3)->user___allowed).data_6_7) =
          (Init_sol_uint256_t(GET_ND_UINT(212, 256, "ERC20::_allowed::_6_7")));
      (((contract_3)->user___allowed).data_6_8) =
          (Init_sol_uint256_t(GET_ND_UINT(213, 256, "ERC20::_allowed::_6_8")));
      (((contract_3)->user___allowed).data_7_0) =
          (Init_sol_uint256_t(GET_ND_UINT(214, 256, "ERC20::_allowed::_7_0")));
      (((contract_3)->user___allowed).data_7_1) =
          (Init_sol_uint256_t(GET_ND_UINT(215, 256, "ERC20::_allowed::_7_1")));
      (((contract_3)->user___allowed).data_7_2) =
          (Init_sol_uint256_t(GET_ND_UINT(216, 256, "ERC20::_allowed::_7_2")));
      (((contract_3)->user___allowed).data_7_3) =
          (Init_sol_uint256_t(GET_ND_UINT(217, 256, "ERC20::_allowed::_7_3")));
      (((contract_3)->user___allowed).data_7_4) =
          (Init_sol_uint256_t(GET_ND_UINT(218, 256, "ERC20::_allowed::_7_4")));
      (((contract_3)->user___allowed).data_7_5) =
          (Init_sol_uint256_t(GET_ND_UINT(219, 256, "ERC20::_allowed::_7_5")));
      (((contract_3)->user___allowed).data_7_6) =
          (Init_sol_uint256_t(GET_ND_UINT(220, 256, "ERC20::_allowed::_7_6")));
      (((contract_3)->user___allowed).data_7_7) =
          (Init_sol_uint256_t(GET_ND_UINT(221, 256, "ERC20::_allowed::_7_7")));
      (((contract_3)->user___allowed).data_7_8) =
          (Init_sol_uint256_t(GET_ND_UINT(222, 256, "ERC20::_allowed::_7_8")));
      (((contract_3)->user___allowed).data_8_0) =
          (Init_sol_uint256_t(GET_ND_UINT(223, 256, "ERC20::_allowed::_8_0")));
      (((contract_3)->user___allowed).data_8_1) =
          (Init_sol_uint256_t(GET_ND_UINT(224, 256, "ERC20::_allowed::_8_1")));
      (((contract_3)->user___allowed).data_8_2) =
          (Init_sol_uint256_t(GET_ND_UINT(225, 256, "ERC20::_allowed::_8_2")));
      (((contract_3)->user___allowed).data_8_3) =
          (Init_sol_uint256_t(GET_ND_UINT(226, 256, "ERC20::_allowed::_8_3")));
      (((contract_3)->user___allowed).data_8_4) =
          (Init_sol_uint256_t(GET_ND_UINT(227, 256, "ERC20::_allowed::_8_4")));
      (((contract_3)->user___allowed).data_8_5) =
          (Init_sol_uint256_t(GET_ND_UINT(228, 256, "ERC20::_allowed::_8_5")));
      (((contract_3)->user___allowed).data_8_6) =
          (Init_sol_uint256_t(GET_ND_UINT(229, 256, "ERC20::_allowed::_8_6")));
      (((contract_3)->user___allowed).data_8_7) =
          (Init_sol_uint256_t(GET_ND_UINT(230, 256, "ERC20::_allowed::_8_7")));
      (((contract_3)->user___allowed).data_8_8) =
          (Init_sol_uint256_t(GET_ND_UINT(231, 256, "ERC20::_allowed::_8_8")));
    }
    if (GET_ND_RANGE(234, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(232, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(233, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(235, 0, 17, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling transmute(_mass) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(0, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__mass =
          Init_sol_uint256_t(GET_ND_UINT(1, 256, "_mass"));
      sol_uint256_t prev_lead = Read_Map_1(&contract_2->user___balances, sender);
      sol_uint256_t prev_gold = Read_Map_1(&contract_3->user___balances, sender);
      Alchemist_Method_transmute(&(contract_1), sender, value, blocknum,
                                 timestamp, paid, sender, arg__mass);
      sol_uint256_t post_lead = Read_Map_1(&contract_2->user___balances, sender);
      sol_uint256_t  post_gold = Read_Map_1(&contract_3->user___balances, sender);
      sol_assert(post_lead.v == prev_lead.v - arg__mass.v, 0);
      sol_assert(post_gold.v == prev_gold.v + arg__mass.v, 0);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling totalSupply() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_totalSupply(contract_2, sender, value, blocknum, timestamp,
                               paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling balanceOf(owner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(4, 0, 9, "owner"));
      ERC20_Method_balanceOf(contract_2, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling allowance(owner, spender) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(6, 0, 9, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(7, 0, 9, "spender"));
      ERC20_Method_allowance(contract_2, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling transfer(to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(9, 0, 9, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(10, 256, "value"));
      ERC20_Method_transfer(contract_2, sender, value, blocknum, timestamp,
                            paid, sender, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling approve(spender, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(12, 0, 9, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(13, 256, "value"));
      ERC20_Method_approve(contract_2, sender, value, blocknum, timestamp, paid,
                           sender, arg_spender, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(15, 0, 9, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(16, 0, 9, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(17, 256, "value"));
      ERC20_Method_transferFrom(contract_2, sender, value, blocknum, timestamp,
                                paid, sender, arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 9, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(20, 256, "addedValue"));
      ERC20_Method_increaseAllowance(contract_2, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 9, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(23, 256, "subtractedValue"));
      ERC20_Method_decreaseAllowance(contract_2, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling totalSupply() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(24, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_totalSupply(contract_3, sender, value, blocknum, timestamp,
                               paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling balanceOf(owner) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(26, 0, 9, "owner"));
      ERC20_Method_balanceOf(contract_3, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling allowance(owner, spender) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 9, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(29, 0, 9, "spender"));
      ERC20_Method_allowance(contract_3, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling transfer(to, value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(30, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(31, 0, 9, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(32, 256, "value"));
      ERC20_Method_transfer(contract_3, sender, value, blocknum, timestamp,
                            paid, sender, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling approve(spender, value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(33, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(34, 0, 9, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(35, 256, "value"));
      ERC20_Method_approve(contract_3, sender, value, blocknum, timestamp, paid,
                           sender, arg_spender, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(36, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(37, 0, 9, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(38, 0, 9, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(39, 256, "value"));
      ERC20_Method_transferFrom(contract_3, sender, value, blocknum, timestamp,
                                paid, sender, arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(40, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(41, 0, 9, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(42, 256, "addedValue"));
      ERC20_Method_increaseAllowance(contract_3, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(43, 4, 9, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(44, 0, 9, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(45, 256, "subtractedValue"));
      ERC20_Method_decreaseAllowance(contract_3, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
  }
}