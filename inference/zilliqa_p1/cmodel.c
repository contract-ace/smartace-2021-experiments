#include "cmodel.h"
#include "seahorn/seasynth.h"
sol_raw_uint160_t g_literal_address_0;
GHOST_VAR sol_address_t last; 
extern bool Infer_1(sol_raw_uint8_t v0, sol_raw_uint8_t v1,
                    sol_raw_uint256_t v2, sol_raw_uint256_t v3);
PARTIAL_FN bool Inv_1(sol_raw_uint8_t v0, sol_raw_uint8_t v1,
                      sol_raw_uint256_t v2, sol_raw_uint256_t v3) {
  if (((v3) == (0)) &&
      (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1)))))
    return 1;
  return Infer_1(v0, v1, v2, v3);
}
extern bool Infer_2(sol_raw_uint8_t v0, sol_raw_uint8_t v1,
                    sol_raw_uint256_t v2, sol_raw_uint256_t v3);
PARTIAL_FN bool Inv_2(sol_raw_uint8_t v0, sol_raw_uint8_t v1,
                      sol_raw_uint256_t v2, sol_raw_uint256_t v3) {
  if (((v3) == (0)) &&
      (((v2) == (0)) && (((v1) == (0)) && (((v0) == (0)) && (1)))))
    return 1;
  return Infer_2(v0, v1, v2, v3);
}
struct Map_2 {
  sol_uint256_t sum;
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
};
struct ZilliqaToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_pausedPublic;
  sol_bool_t user_pausedOwnerAdmin;
  sol_address_t user_admin;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply;
};
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_require(((func_user_b).v) <= ((func_user_a).v), 0);
  { return Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v)); }
}
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) + ((func_user_b).v));
  sol_require(((func_user_c).v) >= ((func_user_a).v), 0);
  { return Init_sol_uint256_t((func_user_c).v); }
}
struct Map_2 ZeroInit_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(0));
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
        (((arr)->sum).v) -= (((arr)->data_7_7).v);
        ((arr)->data_7_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_6).v);
        ((arr)->data_7_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_5).v);
        ((arr)->data_7_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_4).v);
        ((arr)->data_7_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_3).v);
        ((arr)->data_7_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_2).v);
        ((arr)->data_7_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_1).v);
        ((arr)->data_7_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_0).v);
        ((arr)->data_7_0) = (dat);
      }
    } else if ((6) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_7).v);
        ((arr)->data_6_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_6).v);
        ((arr)->data_6_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_5).v);
        ((arr)->data_6_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_4).v);
        ((arr)->data_6_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_3).v);
        ((arr)->data_6_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_2).v);
        ((arr)->data_6_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_1).v);
        ((arr)->data_6_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_0).v);
        ((arr)->data_6_0) = (dat);
      }
    } else if ((5) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_7).v);
        ((arr)->data_5_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_6).v);
        ((arr)->data_5_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_5).v);
        ((arr)->data_5_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_4).v);
        ((arr)->data_5_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_3).v);
        ((arr)->data_5_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_2).v);
        ((arr)->data_5_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_1).v);
        ((arr)->data_5_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_0).v);
        ((arr)->data_5_0) = (dat);
      }
    } else if ((4) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_7).v);
        ((arr)->data_4_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_6).v);
        ((arr)->data_4_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_5).v);
        ((arr)->data_4_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_4).v);
        ((arr)->data_4_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_3).v);
        ((arr)->data_4_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_2).v);
        ((arr)->data_4_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_1).v);
        ((arr)->data_4_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_0).v);
        ((arr)->data_4_0) = (dat);
      }
    } else if ((3) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_7).v);
        ((arr)->data_3_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_6).v);
        ((arr)->data_3_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_5).v);
        ((arr)->data_3_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_4).v);
        ((arr)->data_3_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_3).v);
        ((arr)->data_3_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_2).v);
        ((arr)->data_3_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_1).v);
        ((arr)->data_3_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_0).v);
        ((arr)->data_3_0) = (dat);
      }
    } else if ((2) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_7).v);
        ((arr)->data_2_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_6).v);
        ((arr)->data_2_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_5).v);
        ((arr)->data_2_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_4).v);
        ((arr)->data_2_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_3).v);
        ((arr)->data_2_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_2).v);
        ((arr)->data_2_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_1).v);
        ((arr)->data_2_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_0).v);
        ((arr)->data_2_0) = (dat);
      }
    } else if ((1) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_7).v);
        ((arr)->data_1_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_6).v);
        ((arr)->data_1_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_5).v);
        ((arr)->data_1_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_4).v);
        ((arr)->data_1_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_3).v);
        ((arr)->data_1_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_2).v);
        ((arr)->data_1_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_1).v);
        ((arr)->data_1_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_0).v);
        ((arr)->data_1_0) = (dat);
      }
    } else if ((0) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_7).v);
        ((arr)->data_0_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_6).v);
        ((arr)->data_0_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_5).v);
        ((arr)->data_0_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_4).v);
        ((arr)->data_0_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_3).v);
        ((arr)->data_0_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_2).v);
        ((arr)->data_0_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_1).v);
        ((arr)->data_0_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_0).v);
        ((arr)->data_0_0) = (dat);
      }
    }
  }
  (((arr)->sum).v) += ((dat).v);
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
void ZilliqaToken_Constructor(struct ZilliqaToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user___admin,
                              sol_uint256_t func_user___totalTokenAmount) {
  ((self->user_admin).v) = ((func_user___admin).v);
  ((self->user_totalSupply).v) = ((func_user___totalTokenAmount).v);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t((func_user___totalTokenAmount).v));
  {
    g_literal_address_0;
    (sender).v;
    (func_user___totalTokenAmount).v;
    sol_emit("Transfer(address(0), msg.sender, _totalTokenAmount)");
  }
}
void Init_ERC20Basic_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self)->user_totalSupply) = (Init_sol_uint256_t(0));
}
void Init_ERC20_For_ZilliqaToken(struct ZilliqaToken *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  Init_ERC20Basic_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_BasicToken_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self)->user_balances) = (ZeroInit_Map_1());
}
void Init_StandardToken_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self)->user_allowed) = (ZeroInit_Map_2());
  Init_ERC20_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
  Init_BasicToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Ownable_Constructor_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_ZilliqaToken(struct ZilliqaToken *self,
                                   sol_address_t sender, sol_uint256_t value,
                                   sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin);
}
void Init_Pausable_For_ZilliqaToken(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  ((self)->user_pausedPublic) = (Init_sol_bool_t(1));
  ((self)->user_pausedOwnerAdmin) = (Init_sol_bool_t(0));
  ((self)->user_admin) = (Init_sol_address_t(0));
  Init_Ownable_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin);
}
void Init_PausableToken_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  Init_StandardToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
  Init_Pausable_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
}
void Init_ZilliqaToken(struct ZilliqaToken *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user___admin,
                       sol_uint256_t user___totalTokenAmount) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_PausableToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
  ZilliqaToken_Constructor(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin, user___admin,
                           user___totalTokenAmount);
}
sol_bool_t BasicToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  sol_require(((func_user___to).v) != (g_literal_address_0), 0);
  sol_require(
      ((func_user___value).v) <=
          ((Read_Map_1(&(self->user_balances), Init_sol_address_t((sender).v)))
               .v),
      0);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t((Read_Map_1(&(self->user_balances),
                                              Init_sol_address_t((sender).v)))
                                      .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user_balances),
                                       Init_sol_address_t((func_user___to).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  {
    (sender).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(msg.sender, _to, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (BasicToken_Method_For_ZilliqaToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_1_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (PausableToken_Method_For_ZilliqaToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t ZilliqaToken_Method_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user_to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user_to).v) != (g_literal_address_0), 0);
  sol_require(((func_user_to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (ZilliqaToken_Method_1_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  sol_require(((func_user___to).v) != (g_literal_address_0), 0);
  sol_require(((func_user___value).v) <=
                  ((Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user___from).v)))
                       .v),
              0);
  sol_require(((func_user___value).v) <=
                  ((Read_Map_2(&(self->user_allowed),
                               Init_sol_address_t((func_user___from).v),
                               Init_sol_address_t((sender).v)))
                       .v),
              0);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((func_user___from).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user___from).v)))
                       .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user_balances),
                                       Init_sol_address_t((func_user___to).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((func_user___from).v),
              Init_sol_address_t((sender).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_2(&(self->user_allowed),
                                       Init_sol_address_t((func_user___from).v),
                                       Init_sol_address_t((sender).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  {
    (func_user___from).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(_from, _to, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_1_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (PausableToken_Method_For_ZilliqaToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t ZilliqaToken_Method_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user_to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user_to).v) != (g_literal_address_0), 0);
  sol_require(((func_user_to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (ZilliqaToken_Method_1_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_burn(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t func_user___value) {
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t((Read_Map_1(&(self->user_balances),
                                              Init_sol_address_t((sender).v)))
                                      .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  ((self->user_totalSupply).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user_totalSupply).v),
                            Init_sol_uint256_t((func_user___value).v)))
           .v);
  {
    (sender).v;
    (func_user___value).v;
    sol_emit("Burn(msg.sender, _value)");
  }
  {
    (sender).v;
    g_literal_address_0;
    (func_user___value).v;
    sol_emit("Transfer(msg.sender, address(0), _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t ZilliqaToken_Method_burnFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_uint256_t func_user___value) {
  sol_require((ZilliqaToken_Method_transferFrom(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((func_user___from).v),
                   Init_sol_address_t((sender).v),
                   Init_sol_uint256_t((func_user___value).v)))
                  .v,
              0);
  {
    return Init_sol_bool_t(
        (ZilliqaToken_Method_burn(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin,
                                  Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
void ZilliqaToken_Method_1_changeAdmin(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newAdmin) {
  {
    (self->user_admin).v;
    (func_user_newAdmin).v;
    sol_emit("AdminTransferred(admin, newAdmin)");
  }
  ((self->user_admin).v) = ((func_user_newAdmin).v);
}
void ZilliqaToken_Method_changeAdmin(struct ZilliqaToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model_newAdmin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZilliqaToken_Method_1_changeAdmin(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    func_model_newAdmin);
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user___spender).v),
              Init_sol_uint256_t((func_user___value).v));
  {
    (sender).v;
    (func_user___spender).v;
    (func_user___value).v;
    sol_emit("Approval(msg.sender, _spender, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_approve(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  Write_Map_2(
      &(self->user_allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user___spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user_allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user___spender).v)))
                       .v),
               Init_sol_uint256_t((func_user___addedValue).v)))
              .v));
  {
    (sender).v;
    (func_user___spender).v;
    (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v)))
        .v;
    sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_increaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___addedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_increaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___addedValue));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_uint256_t func_user_oldValue = Init_sol_uint256_t(
      (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                  Init_sol_address_t((func_user___spender).v)))
          .v);
  if (((func_user___subtractedValue).v) > ((func_user_oldValue).v)) {
    Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v),
                Init_sol_uint256_t(0));
  } else {
    Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v),
                Init_sol_uint256_t(
                    (SafeMath_Method_sub(
                         Init_sol_uint256_t((func_user_oldValue).v),
                         Init_sol_uint256_t((func_user___subtractedValue).v)))
                        .v));
  }
  {
    (sender).v;
    (func_user___spender).v;
    (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v)))
        .v;
    sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_decreaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___subtractedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_decreaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___subtractedValue));
  return func_model_rv;
}
void Pausable_Method_1_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_user_newPausedPublic,
    sol_bool_t func_user_newPausedOwnerAdmin) {
  sol_require(!((((func_user_newPausedPublic).v) == (0)) &&
                (((func_user_newPausedOwnerAdmin).v) == (1))),
              0);
  ((self->user_pausedPublic).v) = ((func_user_newPausedPublic).v);
  ((self->user_pausedOwnerAdmin).v) = ((func_user_newPausedOwnerAdmin).v);
  {
    (func_user_newPausedPublic).v;
    sol_emit("PausePublic(newPausedPublic)");
  }
  {
    (func_user_newPausedOwnerAdmin).v;
    sol_emit("PauseOwnerAdmin(newPausedOwnerAdmin)");
  }
}
void Pausable_Method_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_model_newPausedPublic,
    sol_bool_t func_model_newPausedOwnerAdmin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_ZilliqaToken_pause(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newPausedPublic, func_model_newPausedOwnerAdmin);
}
void Ownable_Method_1_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (g_literal_address_0), 0);
  {
    (self->user_owner).v;
    (func_user_newOwner).v;
    sol_emit("OwnershipTransferred(owner, newOwner)");
  }
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_ZilliqaToken_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
}
sol_uint256_t StandardToken_Method_For_ZilliqaToken_allowance(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user_allowed),
                    Init_sol_address_t((func_user___owner).v),
                    Init_sol_address_t((func_user___spender).v)))
            .v);
  }
}
sol_uint256_t BasicToken_Method_For_ZilliqaToken_balanceOf(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner) {
  sol_uint256_t func_user_balance = Init_sol_uint256_t(0);
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user_balances),
                    Init_sol_address_t((func_user___owner).v)))
            .v);
  }
  return func_user_balance;
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(33, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(34, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct ZilliqaToken contract_1;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (((contract_1).user_admin).v) = (0);
  (((contract_1).user_owner).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(37, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(35, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(36, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(38, 2, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_ZilliqaToken(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(GET_ND_RANGE(39, 0, 7, "ZilliqaToken:_admin")),
        Init_sol_uint256_t(
            GET_ND_UINT(40, 256, "ZilliqaToken:_totalTokenAmount")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
      uint64_t map_id;
      (map_id) = (GET_ND_RANGE(43, 0, 3, "map"));
      switch (map_id) {
      case 0: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(41, 0, 64, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_0).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_1).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_2).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_3).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_4).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_5).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_6).v);
          break;
        }
        case 7: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_0_7).v);
          break;
        }
        case 8: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_0).v);
          break;
        }
        case 9: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_1).v);
          break;
        }
        case 10: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_2).v);
          break;
        }
        case 11: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_3).v);
          break;
        }
        case 12: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_4).v);
          break;
        }
        case 13: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_5).v);
          break;
        }
        case 14: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_6).v);
          break;
        }
        case 15: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_1_7).v);
          break;
        }
        case 16: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_0).v);
          break;
        }
        case 17: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_1).v);
          break;
        }
        case 18: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_2).v);
          break;
        }
        case 19: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_3).v);
          break;
        }
        case 20: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_4).v);
          break;
        }
        case 21: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_5).v);
          break;
        }
        case 22: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_6).v);
          break;
        }
        case 23: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_2_7).v);
          break;
        }
        case 24: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_0).v);
          break;
        }
        case 25: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_1).v);
          break;
        }
        case 26: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_2).v);
          break;
        }
        case 27: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_3).v);
          break;
        }
        case 28: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_4).v);
          break;
        }
        case 29: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_5).v);
          break;
        }
        case 30: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_6).v);
          break;
        }
        case 31: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_3_7).v);
          break;
        }
        case 32: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_0).v);
          break;
        }
        case 33: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_1).v);
          break;
        }
        case 34: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_2).v);
          break;
        }
        case 35: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_3).v);
          break;
        }
        case 36: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_4).v);
          break;
        }
        case 37: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_5).v);
          break;
        }
        case 38: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_6).v);
          break;
        }
        case 39: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_4_7).v);
          break;
        }
        case 40: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_0).v);
          break;
        }
        case 41: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_1).v);
          break;
        }
        case 42: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_2).v);
          break;
        }
        case 43: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_3).v);
          break;
        }
        case 44: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_4).v);
          break;
        }
        case 45: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_5).v);
          break;
        }
        case 46: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_6).v);
          break;
        }
        case 47: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_5_7).v);
          break;
        }
        case 48: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_0).v);
          break;
        }
        case 49: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_1).v);
          break;
        }
        case 50: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_2).v);
          break;
        }
        case 51: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_3).v);
          break;
        }
        case 52: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_4).v);
          break;
        }
        case 53: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_5).v);
          break;
        }
        case 54: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_6).v);
          break;
        }
        case 55: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_6_7).v);
          break;
        }
        case 56: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_0).v);
          break;
        }
        case 57: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_1).v);
          break;
        }
        case 58: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_2).v);
          break;
        }
        case 59: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_3).v);
          break;
        }
        case 60: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_4).v);
          break;
        }
        case 61: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_5).v);
          break;
        }
        case 62: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_6).v);
          break;
        }
        case 63: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_allowed).data_7_7).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_1(((contract_1).user_pausedPublic).v,
                      ((contract_1).user_pausedOwnerAdmin).v,
                      ((contract_1).user_totalSupply).v, v0));
        break;
      }
      case 1: {
        sol_raw_uint256_t v0;
        uint64_t entry_id;
        (entry_id) = (GET_ND_RANGE(42, 0, 8, "entry"));
        switch (entry_id) {
        case 0: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_0).v);
          break;
        }
        case 1: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_1).v);
          break;
        }
        case 2: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_2).v);
          break;
        }
        case 3: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_3).v);
          break;
        }
        case 4: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_4).v);
          break;
        }
        case 5: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_5).v);
          break;
        }
        case 6: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_6).v);
          break;
        }
        case 7: {
          uint8_t guard;
          (guard) = (0);
          (guard) = (1);
          sol_require(guard, "Guard");
          (v0) = ((((contract_1).user_balances).data_7).v);
          break;
        }
        default: {
          sol_require(0, "Model failure, entry_id out of bounds.");
        }
        }
        sassert(Inv_2(((contract_1).user_pausedPublic).v,
                      ((contract_1).user_pausedOwnerAdmin).v,
                      ((contract_1).user_totalSupply).v, v0));
        break;
      }
      default: {
      }
      }
    }
    if (sol_is_using_reps()) {
      (((contract_1).user_allowed).data_0_0) = (Init_sol_uint256_t(
          GET_ND_UINT(44, 256, "ZilliqaToken::allowed::_0_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_0).v));
      (((contract_1).user_allowed).data_0_1) = (Init_sol_uint256_t(
          GET_ND_UINT(45, 256, "ZilliqaToken::allowed::_0_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_1).v));
      (((contract_1).user_allowed).data_0_2) = (Init_sol_uint256_t(
          GET_ND_UINT(46, 256, "ZilliqaToken::allowed::_0_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_2).v));
      (((contract_1).user_allowed).data_0_3) = (Init_sol_uint256_t(
          GET_ND_UINT(47, 256, "ZilliqaToken::allowed::_0_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_3).v));
      (((contract_1).user_allowed).data_0_4) = (Init_sol_uint256_t(
          GET_ND_UINT(48, 256, "ZilliqaToken::allowed::_0_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_4).v));
      (((contract_1).user_allowed).data_0_5) = (Init_sol_uint256_t(
          GET_ND_UINT(49, 256, "ZilliqaToken::allowed::_0_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_5).v));
      (((contract_1).user_allowed).data_0_6) = (Init_sol_uint256_t(
          GET_ND_UINT(50, 256, "ZilliqaToken::allowed::_0_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_6).v));
      (((contract_1).user_allowed).data_0_7) = (Init_sol_uint256_t(
          GET_ND_UINT(51, 256, "ZilliqaToken::allowed::_0_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_0_7).v));
      (((contract_1).user_allowed).data_1_0) = (Init_sol_uint256_t(
          GET_ND_UINT(52, 256, "ZilliqaToken::allowed::_1_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_0).v));
      (((contract_1).user_allowed).data_1_1) = (Init_sol_uint256_t(
          GET_ND_UINT(53, 256, "ZilliqaToken::allowed::_1_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_1).v));
      (((contract_1).user_allowed).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(54, 256, "ZilliqaToken::allowed::_1_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_2).v));
      (((contract_1).user_allowed).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(55, 256, "ZilliqaToken::allowed::_1_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_3).v));
      (((contract_1).user_allowed).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(56, 256, "ZilliqaToken::allowed::_1_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_4).v));
      (((contract_1).user_allowed).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(57, 256, "ZilliqaToken::allowed::_1_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_5).v));
      (((contract_1).user_allowed).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(58, 256, "ZilliqaToken::allowed::_1_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_6).v));
      (((contract_1).user_allowed).data_1_7) = (Init_sol_uint256_t(
          GET_ND_UINT(59, 256, "ZilliqaToken::allowed::_1_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_1_7).v));
      (((contract_1).user_allowed).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(60, 256, "ZilliqaToken::allowed::_2_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_0).v));
      (((contract_1).user_allowed).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(61, 256, "ZilliqaToken::allowed::_2_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_1).v));
      (((contract_1).user_allowed).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(62, 256, "ZilliqaToken::allowed::_2_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_2).v));
      (((contract_1).user_allowed).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(63, 256, "ZilliqaToken::allowed::_2_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_3).v));
      (((contract_1).user_allowed).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(64, 256, "ZilliqaToken::allowed::_2_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_4).v));
      (((contract_1).user_allowed).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(65, 256, "ZilliqaToken::allowed::_2_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_5).v));
      (((contract_1).user_allowed).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(66, 256, "ZilliqaToken::allowed::_2_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_6).v));
      (((contract_1).user_allowed).data_2_7) = (Init_sol_uint256_t(
          GET_ND_UINT(67, 256, "ZilliqaToken::allowed::_2_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_2_7).v));
      (((contract_1).user_allowed).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(68, 256, "ZilliqaToken::allowed::_3_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_0).v));
      (((contract_1).user_allowed).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(69, 256, "ZilliqaToken::allowed::_3_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_1).v));
      (((contract_1).user_allowed).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(70, 256, "ZilliqaToken::allowed::_3_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_2).v));
      (((contract_1).user_allowed).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(71, 256, "ZilliqaToken::allowed::_3_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_3).v));
      (((contract_1).user_allowed).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(72, 256, "ZilliqaToken::allowed::_3_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_4).v));
      (((contract_1).user_allowed).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(73, 256, "ZilliqaToken::allowed::_3_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_5).v));
      (((contract_1).user_allowed).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(74, 256, "ZilliqaToken::allowed::_3_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_6).v));
      (((contract_1).user_allowed).data_3_7) = (Init_sol_uint256_t(
          GET_ND_UINT(75, 256, "ZilliqaToken::allowed::_3_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_3_7).v));
      (((contract_1).user_allowed).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(76, 256, "ZilliqaToken::allowed::_4_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_0).v));
      (((contract_1).user_allowed).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(77, 256, "ZilliqaToken::allowed::_4_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_1).v));
      (((contract_1).user_allowed).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(78, 256, "ZilliqaToken::allowed::_4_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_2).v));
      (((contract_1).user_allowed).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(79, 256, "ZilliqaToken::allowed::_4_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_3).v));
      (((contract_1).user_allowed).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(80, 256, "ZilliqaToken::allowed::_4_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_4).v));
      (((contract_1).user_allowed).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(81, 256, "ZilliqaToken::allowed::_4_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_5).v));
      (((contract_1).user_allowed).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(82, 256, "ZilliqaToken::allowed::_4_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_6).v));
      (((contract_1).user_allowed).data_4_7) = (Init_sol_uint256_t(
          GET_ND_UINT(83, 256, "ZilliqaToken::allowed::_4_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_4_7).v));
      (((contract_1).user_allowed).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "ZilliqaToken::allowed::_5_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_0).v));
      (((contract_1).user_allowed).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(85, 256, "ZilliqaToken::allowed::_5_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_1).v));
      (((contract_1).user_allowed).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(86, 256, "ZilliqaToken::allowed::_5_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_2).v));
      (((contract_1).user_allowed).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(87, 256, "ZilliqaToken::allowed::_5_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_3).v));
      (((contract_1).user_allowed).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(88, 256, "ZilliqaToken::allowed::_5_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_4).v));
      (((contract_1).user_allowed).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(89, 256, "ZilliqaToken::allowed::_5_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_5).v));
      (((contract_1).user_allowed).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(90, 256, "ZilliqaToken::allowed::_5_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_6).v));
      (((contract_1).user_allowed).data_5_7) = (Init_sol_uint256_t(
          GET_ND_UINT(91, 256, "ZilliqaToken::allowed::_5_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_5_7).v));
      (((contract_1).user_allowed).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(92, 256, "ZilliqaToken::allowed::_6_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_0).v));
      (((contract_1).user_allowed).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(93, 256, "ZilliqaToken::allowed::_6_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_1).v));
      (((contract_1).user_allowed).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(94, 256, "ZilliqaToken::allowed::_6_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_2).v));
      (((contract_1).user_allowed).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(95, 256, "ZilliqaToken::allowed::_6_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_3).v));
      (((contract_1).user_allowed).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(96, 256, "ZilliqaToken::allowed::_6_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_4).v));
      (((contract_1).user_allowed).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(97, 256, "ZilliqaToken::allowed::_6_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_5).v));
      (((contract_1).user_allowed).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(98, 256, "ZilliqaToken::allowed::_6_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_6).v));
      (((contract_1).user_allowed).data_6_7) = (Init_sol_uint256_t(
          GET_ND_UINT(99, 256, "ZilliqaToken::allowed::_6_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_6_7).v));
      (((contract_1).user_allowed).data_7_0) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "ZilliqaToken::allowed::_7_0")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_0).v));
      (((contract_1).user_allowed).data_7_1) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "ZilliqaToken::allowed::_7_1")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_1).v));
      (((contract_1).user_allowed).data_7_2) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "ZilliqaToken::allowed::_7_2")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_2).v));
      (((contract_1).user_allowed).data_7_3) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "ZilliqaToken::allowed::_7_3")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_3).v));
      (((contract_1).user_allowed).data_7_4) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "ZilliqaToken::allowed::_7_4")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_4).v));
      (((contract_1).user_allowed).data_7_5) = (Init_sol_uint256_t(
          GET_ND_UINT(105, 256, "ZilliqaToken::allowed::_7_5")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_5).v));
      (((contract_1).user_allowed).data_7_6) = (Init_sol_uint256_t(
          GET_ND_UINT(106, 256, "ZilliqaToken::allowed::_7_6")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_6).v));
      (((contract_1).user_allowed).data_7_7) = (Init_sol_uint256_t(
          GET_ND_UINT(107, 256, "ZilliqaToken::allowed::_7_7")));
      assume(Inv_1(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_allowed).data_7_7).v));
      (((contract_1).user_balances).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(108, 256, "ZilliqaToken::balances::_0")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_0).v));
      (((contract_1).user_balances).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(109, 256, "ZilliqaToken::balances::_1")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_1).v));
      (((contract_1).user_balances).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(110, 256, "ZilliqaToken::balances::_2")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_2).v));
      (((contract_1).user_balances).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(111, 256, "ZilliqaToken::balances::_3")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_3).v));
      (((contract_1).user_balances).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(112, 256, "ZilliqaToken::balances::_4")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_4).v));
      (((contract_1).user_balances).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(113, 256, "ZilliqaToken::balances::_5")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_5).v));
      (((contract_1).user_balances).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(114, 256, "ZilliqaToken::balances::_6")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_6).v));
      (((contract_1).user_balances).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(115, 256, "ZilliqaToken::balances::_7")));
      assume(Inv_2(((contract_1).user_pausedPublic).v,
                   ((contract_1).user_pausedOwnerAdmin).v,
                   ((contract_1).user_totalSupply).v,
                   (((contract_1).user_balances).data_7).v));
    }
    if (GET_ND_RANGE(118, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(116, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(117, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(119, 0, 12, "next_call"));
    last = contract_1.user_owner;
    switch (next_call) {
    case 0: {
      smartace_log("[Calling transfer(_to, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(0, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(1, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(2, 256, "_value"));
      ZilliqaToken_Method_transfer(&(contract_1), sender, value, blocknum,
                                   timestamp, paid, sender, arg__to,
                                   arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(4, 0, 7, "_from"));
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(5, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(6, 256, "_value"));
      ZilliqaToken_Method_transferFrom(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender, arg__from,
                                       arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling burn(_value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(8, 256, "_value"));
      ZilliqaToken_Method_burn(&(contract_1), sender, value, blocknum,
                               timestamp, paid, sender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling burnFrom(_from, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(10, 0, 7, "_from"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(11, 256, "_value"));
      ZilliqaToken_Method_burnFrom(&(contract_1), sender, value, blocknum,
                                   timestamp, paid, sender, arg__from,
                                   arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling changeAdmin(newAdmin) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newAdmin =
          Init_sol_address_t(GET_ND_RANGE(13, 0, 7, "newAdmin"));
      ZilliqaToken_Method_changeAdmin(&(contract_1), sender, value, blocknum,
                                      timestamp, paid, sender, arg_newAdmin);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling approve(_spender, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(15, 0, 7, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(16, 256, "_value"));
      PausableToken_Method_For_ZilliqaToken_approve(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(18, 0, 7, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(19, 256, "_addedValue"));
      PausableToken_Method_For_ZilliqaToken_increaseApproval(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(21, 0, 7, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(22, 256, "_subtractedValue"));
      PausableToken_Method_For_ZilliqaToken_decreaseApproval(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling pause(newPausedPublic, newPausedOwnerAdmin) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg_newPausedPublic =
          Init_sol_bool_t(GET_ND_RANGE(24, 0, 2, "newPausedPublic"));
      sol_bool_t arg_newPausedOwnerAdmin =
          Init_sol_bool_t(GET_ND_RANGE(25, 0, 2, "newPausedOwnerAdmin"));
      Pausable_Method_For_ZilliqaToken_pause(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_newPausedPublic, arg_newPausedOwnerAdmin);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(26, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(27, 0, 7, "newOwner"));
      Ownable_Method_For_ZilliqaToken_transferOwnership(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(28, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(29, 0, 7, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(30, 0, 7, "_spender"));
      StandardToken_Method_For_ZilliqaToken_allowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling balanceOf(_owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(31, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(32, 0, 7, "_owner"));
      BasicToken_Method_For_ZilliqaToken_balanceOf(&(contract_1), sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
    if (last.v != contract_1.user_owner.v)
    {
      sol_assert(last_sender.v == last.v, 0);
    }
  }
}