#include "cmodel.h"
#include "seahorn/seasynth.h"
GHOST_VAR sol_uint256_t last;
sol_raw_uint160_t g_literal_address_0;
extern bool Infer_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint256_t v2, sol_raw_uint256_t v3,
                    sol_raw_uint8_t v4, sol_raw_uint256_t v5,
                    sol_raw_uint256_t v6);
PARTIAL_FN bool Inv_1(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint256_t v2, sol_raw_uint256_t v3,
                      sol_raw_uint8_t v4, sol_raw_uint256_t v5,
                      sol_raw_uint256_t v6) {
  if (((v6) == (0)) &&
      (((v5) == (0)) &&
       (((v4) == (0)) &&
        (((v3) == (0)) &&
         (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1))))))))
    return 1;
  return Infer_1(v0, v1, v2, v3, v4, v5, v6);
}
extern bool Infer_2(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                    sol_raw_uint256_t v2, sol_raw_uint256_t v3,
                    sol_raw_uint8_t v4, sol_raw_uint256_t v5,
                    sol_raw_uint256_t v6);
PARTIAL_FN bool Inv_2(sol_raw_uint8_t v0, sol_raw_uint256_t v1,
                      sol_raw_uint256_t v2, sol_raw_uint256_t v3,
                      sol_raw_uint8_t v4, sol_raw_uint256_t v5,
                      sol_raw_uint256_t v6) {
  if (((v6) == (0)) &&
      (((v5) == (0)) &&
       (((v4) == (0)) &&
        (((v3) == (0)) &&
         (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1))))))))
    return 1;
  return Infer_2(v0, v1, v2, v3, v4, v5, v6);
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
struct Melon {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_address_t user_council;
  sol_address_t user_deployer;
  sol_bool_t user_initialSupplyMinted;
  sol_uint256_t user_nextMinting;
  sol_uint256_t user___name;
  sol_uint256_t user___symbol;
  sol_uint8_t user___decimals;
  struct Map_1 user___balances;
  struct Map_2 user___allowed;
  sol_uint256_t user___totalSupply;
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
void ERC20_Method_For_Melon___transfer(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value);
void ERC20_Method_For_Melon___mint(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_value);
void ERC20_Method_For_Melon___burn(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_value);
void ERC20_Method_For_Melon___burnFrom(struct Melon *self, sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin,
                                       sol_address_t func_user_account,
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
void Melon_Constructor(struct Melon *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_uint256_t func_user___name,
                       sol_uint256_t func_user___symbol,
                       sol_uint8_t func_user___decimals,
                       sol_address_t func_user___council) {
  ((self->user_deployer).v) = ((sender).v);
  ((self->user_council).v) = ((func_user___council).v);
}
void ERC20Detailed_Constructor_For_Melon(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals) {
  ((self->user___name).v) = ((func_user_name).v);
  ((self->user___symbol).v) = ((func_user_symbol).v);
  ((self->user___decimals).v) = ((func_user_decimals).v);
}
void Init_ERC20Detailed_For_Melon(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin, sol_uint256_t user_name,
                                  sol_uint256_t user_symbol,
                                  sol_uint8_t user_decimals) {
  ((self)->user___name) = (Init_sol_uint256_t(0));
  ((self)->user___symbol) = (Init_sol_uint256_t(0));
  ((self)->user___decimals) = (Init_sol_uint8_t(0));
  ERC20Detailed_Constructor_For_Melon(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin, user_name,
                                      user_symbol, user_decimals);
}
void Init_ERC20_For_Melon(struct Melon *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowed) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void Init_ERC20Burnable_For_Melon(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  Init_ERC20_For_Melon(self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin);
}
void Init_Melon(struct Melon *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin,
                sol_uint256_t user___name, sol_uint256_t user___symbol,
                sol_uint8_t user___decimals, sol_address_t user___council) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_council) = (Init_sol_address_t(0));
  ((self)->user_deployer) = (Init_sol_address_t(0));
  ((self)->user_initialSupplyMinted) = (Init_sol_bool_t(0));
  ((self)->user_nextMinting) = (Init_sol_uint256_t(1551398400));
  Init_ERC20Detailed_For_Melon(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin,
                               Init_sol_uint256_t((user___name).v),
                               Init_sol_uint256_t((user___symbol).v),
                               Init_sol_uint8_t((user___decimals).v));
  Init_ERC20Burnable_For_Melon(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
  Melon_Constructor(self, sender, value, blocknum, timestamp,
                    Init_sol_bool_t(0), origin, user___name, user___symbol,
                    user___decimals, user___council);
}
void Melon_Method_1_changeCouncil(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_user___newCouncil) {
  ((self->user_council).v) = ((func_user___newCouncil).v);
}
void Melon_Method_changeCouncil(struct Melon *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_model___newCouncil) {
  sol_require(((sender).v) == ((self->user_council).v),
              "Only council can call this");
  Melon_Method_1_changeCouncil(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin,
                               func_model___newCouncil);
}
void Melon_Method_1_mintInitialSupply(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___initialReceiver) {
  sol_require(!((self->user_initialSupplyMinted).v),
              "Initial minting already complete");
  ((self->user_initialSupplyMinted).v) = (1);
  ERC20_Method_For_Melon___mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___initialReceiver).v),
      Init_sol_uint256_t(93261300));
}
void Melon_Method_mintInitialSupply(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___initialReceiver) {
  sol_require(((sender).v) == ((self->user_deployer).v),
              "Only deployer can call this");
  Melon_Method_1_mintInitialSupply(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin,
                                   func_model___initialReceiver);
}
void Melon_Method_2_mintInflation(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  sol_require((self->user_initialSupplyMinted).v,
              "Initial minting not complete");
  ((self->user_nextMinting).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user_nextMinting).v),
                            Init_sol_uint256_t(31536000)))
           .v);
  ERC20_Method_For_Melon___mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((self->user_council).v), Init_sol_uint256_t(30060000));
}
void Melon_Method_1_mintInflation(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  sol_require(((timestamp).v) >= (1551398400), "Inflation is not enabled yet");
  Melon_Method_2_mintInflation(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
}
void Melon_Method_mintInflation(struct Melon *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin) {
  sol_require(((timestamp).v) >= ((self->user_nextMinting).v),
              "Please wait until an interval has passed");
  Melon_Method_1_mintInflation(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
}
sol_uint256_t
ERC20Detailed_Method_For_Melon_name(struct Melon *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___name).v); }
}
sol_uint256_t ERC20Detailed_Method_For_Melon_symbol(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___symbol).v); }
}
sol_uint8_t ERC20Detailed_Method_For_Melon_decimals(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint8_t((self->user___decimals).v); }
}
void ERC20Burnable_Method_For_Melon_burn(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_value) {
  ERC20_Method_For_Melon___burn(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_uint256_t((func_user_value).v));
}
void ERC20Burnable_Method_For_Melon_burnFrom(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_Melon___burnFrom(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    Init_sol_address_t((func_user_from).v),
                                    Init_sol_uint256_t((func_user_value).v));
}
sol_uint256_t
ERC20_Method_For_Melon_totalSupply(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_For_Melon_balanceOf(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_owner).v)))
            .v);
  }
}
sol_uint256_t ERC20_Method_For_Melon_allowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t ERC20_Method_For_Melon_transfer(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_Melon___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Melon_approve(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t ERC20_Method_For_Melon_transferFrom(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
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
  ERC20_Method_For_Melon___transfer(self, sender, value, blocknum, timestamp,
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
sol_bool_t ERC20_Method_For_Melon_increaseAllowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t ERC20_Method_For_Melon_decreaseAllowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
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
void ERC20_Method_For_Melon___transfer(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
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
void ERC20_Method_For_Melon___mint(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
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
void ERC20_Method_For_Melon___burn(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_value) {
  sol_require(((func_user_account).v) != (g_literal_address_0), 0);
  ((self->user___totalSupply).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user___totalSupply).v),
                            Init_sol_uint256_t((func_user_value).v)))
           .v);
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_account).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_account).v)))
                       .v),
               Init_sol_uint256_t((func_user_value).v)))
              .v));
  {
    (func_user_account).v;
    g_literal_address_0;
    (func_user_value).v;
    sol_emit("Transfer(account, address(0), value)");
  }
}
void ERC20_Method_For_Melon___burnFrom(struct Melon *self, sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin,
                                       sol_address_t func_user_account,
                                       sol_uint256_t func_user_value) {
  Write_Map_2(
      &(self->user___allowed), Init_sol_address_t((func_user_account).v),
      Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((func_user_account).v),
                               Init_sol_address_t((sender).v)))
                       .v),
               Init_sol_uint256_t((func_user_value).v)))
              .v));
  ERC20_Method_For_Melon___burn(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin,
                                Init_sol_address_t((func_user_account).v),
                                Init_sol_uint256_t((func_user_value).v));
  {
    (func_user_account).v;
    (sender).v;
    (Read_Map_2(&(self->user___allowed),
                Init_sol_address_t((func_user_account).v),
                Init_sol_address_t((sender).v)))
        .v;
    sol_emit("Approval(account, msg.sender, _allowed[account][msg.sender])");
  }
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(35, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(36, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Melon contract_1;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (((contract_1).user_council).v) = (0);
  (((contract_1).user_deployer).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(39, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(37, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(38, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(40, 2, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Melon(&(contract_1), sender, value, blocknum, timestamp, paid, sender,
               Init_sol_uint256_t(GET_ND_UINT(41, 256, "Melon:_name")),
               Init_sol_uint256_t(GET_ND_UINT(42, 256, "Melon:_symbol")),
               Init_sol_uint8_t(GET_ND_UINT(43, 8, "Melon:_decimals")),
               Init_sol_address_t(GET_ND_RANGE(44, 0, 7, "Melon:_council")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    last = contract_1.user___symbol;
    if (sol_is_using_reps()) {
      uint64_t map_id;
      (map_id) = (GET_ND_RANGE(47, 0, 3, "map"));
      switch (map_id) {
      case 0: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(45, 0, 8, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_0).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_1).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_2).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_3).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_4).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_5).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___balances).data_6).v);
          break;
        }
        case 7: {
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
        sassert(Inv_1(
            ((contract_1).user_initialSupplyMinted).v,
            ((contract_1).user_nextMinting).v, ((contract_1).user___name).v,
            ((contract_1).user___symbol).v, ((contract_1).user___decimals).v,
            ((contract_1).user___totalSupply).v, v0));
        break;
      }
      case 1: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(46, 0, 64, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_0).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_1).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_2).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_3).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_4).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_5).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_6).v);
          break;
        }
        case 7: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_0_7).v);
          break;
        }
        case 8: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_0).v);
          break;
        }
        case 9: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_1).v);
          break;
        }
        case 10: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_2).v);
          break;
        }
        case 11: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_3).v);
          break;
        }
        case 12: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_4).v);
          break;
        }
        case 13: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_5).v);
          break;
        }
        case 14: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_6).v);
          break;
        }
        case 15: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_1_7).v);
          break;
        }
        case 16: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_0).v);
          break;
        }
        case 17: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_1).v);
          break;
        }
        case 18: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_2).v);
          break;
        }
        case 19: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_3).v);
          break;
        }
        case 20: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_4).v);
          break;
        }
        case 21: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_5).v);
          break;
        }
        case 22: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_6).v);
          break;
        }
        case 23: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_2_7).v);
          break;
        }
        case 24: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_0).v);
          break;
        }
        case 25: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_1).v);
          break;
        }
        case 26: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_2).v);
          break;
        }
        case 27: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_3).v);
          break;
        }
        case 28: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_4).v);
          break;
        }
        case 29: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_5).v);
          break;
        }
        case 30: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_6).v);
          break;
        }
        case 31: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_3_7).v);
          break;
        }
        case 32: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_0).v);
          break;
        }
        case 33: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_1).v);
          break;
        }
        case 34: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_2).v);
          break;
        }
        case 35: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_3).v);
          break;
        }
        case 36: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_4).v);
          break;
        }
        case 37: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_5).v);
          break;
        }
        case 38: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_6).v);
          break;
        }
        case 39: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_4_7).v);
          break;
        }
        case 40: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_0).v);
          break;
        }
        case 41: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_1).v);
          break;
        }
        case 42: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_2).v);
          break;
        }
        case 43: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_3).v);
          break;
        }
        case 44: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_4).v);
          break;
        }
        case 45: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_5).v);
          break;
        }
        case 46: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_6).v);
          break;
        }
        case 47: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_5_7).v);
          break;
        }
        case 48: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_0).v);
          break;
        }
        case 49: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_1).v);
          break;
        }
        case 50: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_2).v);
          break;
        }
        case 51: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_3).v);
          break;
        }
        case 52: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_4).v);
          break;
        }
        case 53: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_5).v);
          break;
        }
        case 54: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_6).v);
          break;
        }
        case 55: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_6_7).v);
          break;
        }
        case 56: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_0).v);
          break;
        }
        case 57: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_1).v);
          break;
        }
        case 58: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_2).v);
          break;
        }
        case 59: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_3).v);
          break;
        }
        case 60: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_4).v);
          break;
        }
        case 61: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_5).v);
          break;
        }
        case 62: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user___allowed).data_7_6).v);
          break;
        }
        case 63: {
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
        sassert(Inv_2(
            ((contract_1).user_initialSupplyMinted).v,
            ((contract_1).user_nextMinting).v, ((contract_1).user___name).v,
            ((contract_1).user___symbol).v, ((contract_1).user___decimals).v,
            ((contract_1).user___totalSupply).v, v0));
        break;
      }
      default: {
      }
      }
    }
    if (sol_is_using_reps()) {
      (((contract_1).user___balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(48, 256, "Melon::_balances::_0")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_0).v));
      (((contract_1).user___balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Melon::_balances::_1")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_1).v));
      (((contract_1).user___balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Melon::_balances::_2")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_2).v));
      (((contract_1).user___balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(51, 256, "Melon::_balances::_3")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_3).v));
      (((contract_1).user___balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Melon::_balances::_4")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_4).v));
      (((contract_1).user___balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(53, 256, "Melon::_balances::_5")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_5).v));
      (((contract_1).user___balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(54, 256, "Melon::_balances::_6")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_6).v));
      (((contract_1).user___balances).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "Melon::_balances::_7")));
      assume(Inv_1(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___balances).data_7).v));
      (((contract_1).user___allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(56, 256, "Melon::_allowed::_0_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_0).v));
      (((contract_1).user___allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(57, 256, "Melon::_allowed::_0_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_1).v));
      (((contract_1).user___allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(58, 256, "Melon::_allowed::_0_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_2).v));
      (((contract_1).user___allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(59, 256, "Melon::_allowed::_0_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_3).v));
      (((contract_1).user___allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(60, 256, "Melon::_allowed::_0_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_4).v));
      (((contract_1).user___allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(61, 256, "Melon::_allowed::_0_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_5).v));
      (((contract_1).user___allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(62, 256, "Melon::_allowed::_0_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_6).v));
      (((contract_1).user___allowed).data_0_7) =
          (Init_sol_uint256_t(GET_ND_UINT(63, 256, "Melon::_allowed::_0_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_0_7).v));
      (((contract_1).user___allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(64, 256, "Melon::_allowed::_1_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_0).v));
      (((contract_1).user___allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(65, 256, "Melon::_allowed::_1_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_1).v));
      (((contract_1).user___allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(66, 256, "Melon::_allowed::_1_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_2).v));
      (((contract_1).user___allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(67, 256, "Melon::_allowed::_1_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_3).v));
      (((contract_1).user___allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(68, 256, "Melon::_allowed::_1_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_4).v));
      (((contract_1).user___allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(69, 256, "Melon::_allowed::_1_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_5).v));
      (((contract_1).user___allowed).data_1_6) =
          (Init_sol_uint256_t(GET_ND_UINT(70, 256, "Melon::_allowed::_1_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_6).v));
      (((contract_1).user___allowed).data_1_7) =
          (Init_sol_uint256_t(GET_ND_UINT(71, 256, "Melon::_allowed::_1_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_1_7).v));
      (((contract_1).user___allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(72, 256, "Melon::_allowed::_2_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_0).v));
      (((contract_1).user___allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(73, 256, "Melon::_allowed::_2_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_1).v));
      (((contract_1).user___allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(74, 256, "Melon::_allowed::_2_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_2).v));
      (((contract_1).user___allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(75, 256, "Melon::_allowed::_2_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_3).v));
      (((contract_1).user___allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(76, 256, "Melon::_allowed::_2_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_4).v));
      (((contract_1).user___allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(77, 256, "Melon::_allowed::_2_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_5).v));
      (((contract_1).user___allowed).data_2_6) =
          (Init_sol_uint256_t(GET_ND_UINT(78, 256, "Melon::_allowed::_2_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_6).v));
      (((contract_1).user___allowed).data_2_7) =
          (Init_sol_uint256_t(GET_ND_UINT(79, 256, "Melon::_allowed::_2_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_2_7).v));
      (((contract_1).user___allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(80, 256, "Melon::_allowed::_3_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_0).v));
      (((contract_1).user___allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(81, 256, "Melon::_allowed::_3_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_1).v));
      (((contract_1).user___allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(82, 256, "Melon::_allowed::_3_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_2).v));
      (((contract_1).user___allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(83, 256, "Melon::_allowed::_3_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_3).v));
      (((contract_1).user___allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(84, 256, "Melon::_allowed::_3_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_4).v));
      (((contract_1).user___allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(85, 256, "Melon::_allowed::_3_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_5).v));
      (((contract_1).user___allowed).data_3_6) =
          (Init_sol_uint256_t(GET_ND_UINT(86, 256, "Melon::_allowed::_3_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_6).v));
      (((contract_1).user___allowed).data_3_7) =
          (Init_sol_uint256_t(GET_ND_UINT(87, 256, "Melon::_allowed::_3_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_3_7).v));
      (((contract_1).user___allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(88, 256, "Melon::_allowed::_4_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_0).v));
      (((contract_1).user___allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(89, 256, "Melon::_allowed::_4_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_1).v));
      (((contract_1).user___allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(90, 256, "Melon::_allowed::_4_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_2).v));
      (((contract_1).user___allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(91, 256, "Melon::_allowed::_4_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_3).v));
      (((contract_1).user___allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(92, 256, "Melon::_allowed::_4_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_4).v));
      (((contract_1).user___allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(93, 256, "Melon::_allowed::_4_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_5).v));
      (((contract_1).user___allowed).data_4_6) =
          (Init_sol_uint256_t(GET_ND_UINT(94, 256, "Melon::_allowed::_4_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_6).v));
      (((contract_1).user___allowed).data_4_7) =
          (Init_sol_uint256_t(GET_ND_UINT(95, 256, "Melon::_allowed::_4_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_4_7).v));
      (((contract_1).user___allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(96, 256, "Melon::_allowed::_5_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_0).v));
      (((contract_1).user___allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(97, 256, "Melon::_allowed::_5_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_1).v));
      (((contract_1).user___allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(98, 256, "Melon::_allowed::_5_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_2).v));
      (((contract_1).user___allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(99, 256, "Melon::_allowed::_5_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_3).v));
      (((contract_1).user___allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(100, 256, "Melon::_allowed::_5_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_4).v));
      (((contract_1).user___allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(101, 256, "Melon::_allowed::_5_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_5).v));
      (((contract_1).user___allowed).data_5_6) =
          (Init_sol_uint256_t(GET_ND_UINT(102, 256, "Melon::_allowed::_5_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_6).v));
      (((contract_1).user___allowed).data_5_7) =
          (Init_sol_uint256_t(GET_ND_UINT(103, 256, "Melon::_allowed::_5_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_5_7).v));
      (((contract_1).user___allowed).data_6_0) =
          (Init_sol_uint256_t(GET_ND_UINT(104, 256, "Melon::_allowed::_6_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_0).v));
      (((contract_1).user___allowed).data_6_1) =
          (Init_sol_uint256_t(GET_ND_UINT(105, 256, "Melon::_allowed::_6_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_1).v));
      (((contract_1).user___allowed).data_6_2) =
          (Init_sol_uint256_t(GET_ND_UINT(106, 256, "Melon::_allowed::_6_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_2).v));
      (((contract_1).user___allowed).data_6_3) =
          (Init_sol_uint256_t(GET_ND_UINT(107, 256, "Melon::_allowed::_6_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_3).v));
      (((contract_1).user___allowed).data_6_4) =
          (Init_sol_uint256_t(GET_ND_UINT(108, 256, "Melon::_allowed::_6_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_4).v));
      (((contract_1).user___allowed).data_6_5) =
          (Init_sol_uint256_t(GET_ND_UINT(109, 256, "Melon::_allowed::_6_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_5).v));
      (((contract_1).user___allowed).data_6_6) =
          (Init_sol_uint256_t(GET_ND_UINT(110, 256, "Melon::_allowed::_6_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_6).v));
      (((contract_1).user___allowed).data_6_7) =
          (Init_sol_uint256_t(GET_ND_UINT(111, 256, "Melon::_allowed::_6_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_6_7).v));
      (((contract_1).user___allowed).data_7_0) =
          (Init_sol_uint256_t(GET_ND_UINT(112, 256, "Melon::_allowed::_7_0")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_0).v));
      (((contract_1).user___allowed).data_7_1) =
          (Init_sol_uint256_t(GET_ND_UINT(113, 256, "Melon::_allowed::_7_1")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_1).v));
      (((contract_1).user___allowed).data_7_2) =
          (Init_sol_uint256_t(GET_ND_UINT(114, 256, "Melon::_allowed::_7_2")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_2).v));
      (((contract_1).user___allowed).data_7_3) =
          (Init_sol_uint256_t(GET_ND_UINT(115, 256, "Melon::_allowed::_7_3")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_3).v));
      (((contract_1).user___allowed).data_7_4) =
          (Init_sol_uint256_t(GET_ND_UINT(116, 256, "Melon::_allowed::_7_4")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_4).v));
      (((contract_1).user___allowed).data_7_5) =
          (Init_sol_uint256_t(GET_ND_UINT(117, 256, "Melon::_allowed::_7_5")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_5).v));
      (((contract_1).user___allowed).data_7_6) =
          (Init_sol_uint256_t(GET_ND_UINT(118, 256, "Melon::_allowed::_7_6")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_6).v));
      (((contract_1).user___allowed).data_7_7) =
          (Init_sol_uint256_t(GET_ND_UINT(119, 256, "Melon::_allowed::_7_7")));
      assume(Inv_2(((contract_1).user_initialSupplyMinted).v,
                   ((contract_1).user_nextMinting).v,
                   ((contract_1).user___name).v, ((contract_1).user___symbol).v,
                   ((contract_1).user___decimals).v,
                   ((contract_1).user___totalSupply).v,
                   (((contract_1).user___allowed).data_7_7).v));
    }
    if (GET_ND_RANGE(122, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(120, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(121, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(123, 0, 16, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling changeCouncil(_newCouncil) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(0, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__newCouncil =
          Init_sol_address_t(GET_ND_RANGE(1, 0, 7, "_newCouncil"));
      Melon_Method_changeCouncil(&(contract_1), sender, value, blocknum,
                                 timestamp, paid, sender, arg__newCouncil);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log(
          "[Calling mintInitialSupply(_initialReceiver) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__initialReceiver =
          Init_sol_address_t(GET_ND_RANGE(3, 0, 7, "_initialReceiver"));
      Melon_Method_mintInitialSupply(&(contract_1), sender, value, blocknum,
                                     timestamp, paid, sender,
                                     arg__initialReceiver);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling mintInflation() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Melon_Method_mintInflation(&(contract_1), sender, value, blocknum,
                                 timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling name() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Melon_name(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling symbol() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Melon_symbol(&(contract_1), sender, value,
                                            blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling decimals() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Melon_decimals(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling burn(value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(9, 256, "value"));
      ERC20Burnable_Method_For_Melon_burn(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling burnFrom(from, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(11, 0, 7, "from"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(12, 256, "value"));
      ERC20Burnable_Method_For_Melon_burnFrom(&(contract_1), sender, value,
                                              blocknum, timestamp, paid, sender,
                                              arg_from, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_For_Melon_totalSupply(&(contract_1), sender, value, blocknum,
                                         timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling balanceOf(owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(15, 0, 7, "owner"));
      ERC20_Method_For_Melon_balanceOf(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(owner, spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(17, 0, 7, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(18, 0, 7, "spender"));
      ERC20_Method_For_Melon_allowance(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender, arg_owner,
                                       arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling transfer(to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(19, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(20, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(21, 256, "value"));
      ERC20_Method_For_Melon_transfer(&(contract_1), sender, value, blocknum,
                                      timestamp, paid, sender, arg_to,
                                      arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling approve(spender, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(22, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(23, 0, 7, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(24, 256, "value"));
      ERC20_Method_For_Melon_approve(&(contract_1), sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(26, 0, 7, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(27, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(28, 256, "value"));
      ERC20_Method_For_Melon_transferFrom(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(29, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(30, 0, 7, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(31, 256, "addedValue"));
      ERC20_Method_For_Melon_increaseAllowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(32, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(33, 0, 7, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(34, 256, "subtractedValue"));
      ERC20_Method_For_Melon_decreaseAllowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
    sol_assert(contract_1.user___symbol.v == last.v, 0);
  }
}