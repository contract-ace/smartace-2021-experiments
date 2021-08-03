#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
struct Map_2 {
  sol_uint256_t sum;
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_0_6;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
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
};
struct VUToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_paused;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply__;
  sol_uint256_t user_name;
  sol_uint256_t user_symbol;
  sol_uint8_t user_decimals;
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
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((7) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
      if ((6) == ((key_1).v))
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
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((7) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
      if ((6) == ((key_1).v)) {
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
void VUToken_Constructor(struct VUToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  ((self->user_totalSupply__).v) = (1000000000);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(1000000000));
  {
    g_literal_address_0;
    (sender).v;
    1000000000;
    sol_emit("Transfer(address(0x0), msg.sender, INITIAL_SUPPLY)");
  }
}
void DetailedERC20_Constructor_For_VUToken(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___name,
    sol_uint256_t func_user___symbol, sol_uint8_t func_user___decimals) {
  ((self->user_name).v) = ((func_user___name).v);
  ((self->user_symbol).v) = ((func_user___symbol).v);
  ((self->user_decimals).v) = ((func_user___decimals).v);
}
void Init_ERC20Basic_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {}
void Init_ERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  Init_ERC20Basic_For_VUToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
}
void Init_DetailedERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t user___name,
                                    sol_uint256_t user___symbol,
                                    sol_uint8_t user___decimals) {
  ((self)->user_name) = (Init_sol_uint256_t(0));
  ((self)->user_symbol) = (Init_sol_uint256_t(0));
  ((self)->user_decimals) = (Init_sol_uint8_t(0));
  Init_ERC20_For_VUToken(self, sender, value, blocknum, timestamp,
                         Init_sol_bool_t(0), origin);
  DetailedERC20_Constructor_For_VUToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___name, user___symbol, user___decimals);
}
void Init_BasicToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_BurnableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  Init_BasicToken_For_VUToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
}
void Init_StandardToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  ((self)->user_allowed) = (ZeroInit_Map_2());
}
void Ownable_Constructor_For_VUToken(struct VUToken *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_VUToken(struct VUToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_VUToken(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
}
void Init_Pausable_For_VUToken(struct VUToken *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  ((self)->user_paused) = (Init_sol_bool_t(0));
  Init_Ownable_For_VUToken(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin);
}
void Init_PausableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  Init_StandardToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  Init_Pausable_For_VUToken(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
}
void Init_VUToken(struct VUToken *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_DetailedERC20_For_VUToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t(1), Init_sol_uint256_t(2), Init_sol_uint8_t(18));
  Init_BurnableToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  Init_PausableToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  VUToken_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
sol_bool_t BasicToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (BasicToken_Method_For_VUToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_approve(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_increaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___addedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_increaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___addedValue));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_decreaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___subtractedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_decreaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___subtractedValue));
  return func_model_rv;
}
void Pausable_Method_2_For_VUToken_pause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_paused).v) = (1);
  { sol_emit("Pause()"); }
}
void Pausable_Method_1_For_VUToken_pause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(!((self->user_paused).v), 0);
  Pausable_Method_2_For_VUToken_pause(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
}
void Pausable_Method_For_VUToken_pause(struct VUToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_VUToken_pause(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
}
void Pausable_Method_2_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_paused).v) = (0);
  { sol_emit("Unpause()"); }
}
void Pausable_Method_1_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((self->user_paused).v, 0);
  Pausable_Method_2_For_VUToken_unpause(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin);
}
void Pausable_Method_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_VUToken_unpause(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin);
}
void Ownable_Method_1_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
void Ownable_Method_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_VUToken_transferOwnership(self, sender, value, blocknum,
                                                 timestamp, Init_sol_bool_t(0),
                                                 origin, func_model_newOwner);
}
sol_uint256_t StandardToken_Method_For_VUToken_allowance(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
void BurnableToken_Method_For_VUToken_burn(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___value) {
  sol_require(
      ((func_user___value).v) <=
          ((Read_Map_1(&(self->user_balances), Init_sol_address_t((sender).v)))
               .v),
      0);
  sol_address_t func_user_burner = Init_sol_address_t((sender).v);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((func_user_burner).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user_burner).v)))
                       .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  ((self->user_totalSupply__).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user_totalSupply__).v),
                            Init_sol_uint256_t((func_user___value).v)))
           .v);
  {
    (func_user_burner).v;
    (func_user___value).v;
    sol_emit("Burn(burner, _value)");
  }
}
sol_uint256_t BasicToken_Method_For_VUToken_totalSupply(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user_totalSupply__).v); }
}
sol_uint256_t BasicToken_Method_For_VUToken_balanceOf(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  ((blocknum).v) = (GET_ND_UINT(28, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(29, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct VUToken contract_1;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (((contract_1).user_owner).v) = (0);
  smartace_log("[Initializing contract_1]");
  if (GET_ND_RANGE(32, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(30, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(31, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(33, 2, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_VUToken(&(contract_1), sender, value, blocknum, timestamp, paid,
                 sender);
  }
  smartace_log("[Entering transaction loop]");
  sol_bool_t g_called;
  g_called.v = 0;
  while (sol_continue()) {
    sol_on_transaction();
    if (!g_called.v)
    {
      sol_assert(contract_1.user_totalSupply__.v >= 1000000000, "Property.");
    }
    if (sol_is_using_reps()) {
    }
    if (sol_is_using_reps()) {
      (((contract_1).user_allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(34, 256, "VUToken::allowed::_0_0")));
      (((contract_1).user_allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(35, 256, "VUToken::allowed::_0_1")));
      (((contract_1).user_allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(36, 256, "VUToken::allowed::_0_2")));
      (((contract_1).user_allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(37, 256, "VUToken::allowed::_0_3")));
      (((contract_1).user_allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(38, 256, "VUToken::allowed::_0_4")));
      (((contract_1).user_allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(39, 256, "VUToken::allowed::_0_5")));
      (((contract_1).user_allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(40, 256, "VUToken::allowed::_0_6")));
      (((contract_1).user_allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(41, 256, "VUToken::allowed::_1_0")));
      (((contract_1).user_allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(42, 256, "VUToken::allowed::_1_1")));
      (((contract_1).user_allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(43, 256, "VUToken::allowed::_1_2")));
      (((contract_1).user_allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(44, 256, "VUToken::allowed::_1_3")));
      (((contract_1).user_allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(45, 256, "VUToken::allowed::_1_4")));
      (((contract_1).user_allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(46, 256, "VUToken::allowed::_1_5")));
      (((contract_1).user_allowed).data_1_6) =
          (Init_sol_uint256_t(GET_ND_UINT(47, 256, "VUToken::allowed::_1_6")));
      (((contract_1).user_allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(48, 256, "VUToken::allowed::_2_0")));
      (((contract_1).user_allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(49, 256, "VUToken::allowed::_2_1")));
      (((contract_1).user_allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(50, 256, "VUToken::allowed::_2_2")));
      (((contract_1).user_allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(51, 256, "VUToken::allowed::_2_3")));
      (((contract_1).user_allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(52, 256, "VUToken::allowed::_2_4")));
      (((contract_1).user_allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(53, 256, "VUToken::allowed::_2_5")));
      (((contract_1).user_allowed).data_2_6) =
          (Init_sol_uint256_t(GET_ND_UINT(54, 256, "VUToken::allowed::_2_6")));
      (((contract_1).user_allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "VUToken::allowed::_3_0")));
      (((contract_1).user_allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(56, 256, "VUToken::allowed::_3_1")));
      (((contract_1).user_allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(57, 256, "VUToken::allowed::_3_2")));
      (((contract_1).user_allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(58, 256, "VUToken::allowed::_3_3")));
      (((contract_1).user_allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(59, 256, "VUToken::allowed::_3_4")));
      (((contract_1).user_allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(60, 256, "VUToken::allowed::_3_5")));
      (((contract_1).user_allowed).data_3_6) =
          (Init_sol_uint256_t(GET_ND_UINT(61, 256, "VUToken::allowed::_3_6")));
      (((contract_1).user_allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(62, 256, "VUToken::allowed::_4_0")));
      (((contract_1).user_allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(63, 256, "VUToken::allowed::_4_1")));
      (((contract_1).user_allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(64, 256, "VUToken::allowed::_4_2")));
      (((contract_1).user_allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(65, 256, "VUToken::allowed::_4_3")));
      (((contract_1).user_allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(66, 256, "VUToken::allowed::_4_4")));
      (((contract_1).user_allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(67, 256, "VUToken::allowed::_4_5")));
      (((contract_1).user_allowed).data_4_6) =
          (Init_sol_uint256_t(GET_ND_UINT(68, 256, "VUToken::allowed::_4_6")));
      (((contract_1).user_allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(69, 256, "VUToken::allowed::_5_0")));
      (((contract_1).user_allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(70, 256, "VUToken::allowed::_5_1")));
      (((contract_1).user_allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(71, 256, "VUToken::allowed::_5_2")));
      (((contract_1).user_allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(72, 256, "VUToken::allowed::_5_3")));
      (((contract_1).user_allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(73, 256, "VUToken::allowed::_5_4")));
      (((contract_1).user_allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(74, 256, "VUToken::allowed::_5_5")));
      (((contract_1).user_allowed).data_5_6) =
          (Init_sol_uint256_t(GET_ND_UINT(75, 256, "VUToken::allowed::_5_6")));
      (((contract_1).user_allowed).data_6_0) =
          (Init_sol_uint256_t(GET_ND_UINT(76, 256, "VUToken::allowed::_6_0")));
      (((contract_1).user_allowed).data_6_1) =
          (Init_sol_uint256_t(GET_ND_UINT(77, 256, "VUToken::allowed::_6_1")));
      (((contract_1).user_allowed).data_6_2) =
          (Init_sol_uint256_t(GET_ND_UINT(78, 256, "VUToken::allowed::_6_2")));
      (((contract_1).user_allowed).data_6_3) =
          (Init_sol_uint256_t(GET_ND_UINT(79, 256, "VUToken::allowed::_6_3")));
      (((contract_1).user_allowed).data_6_4) =
          (Init_sol_uint256_t(GET_ND_UINT(80, 256, "VUToken::allowed::_6_4")));
      (((contract_1).user_allowed).data_6_5) =
          (Init_sol_uint256_t(GET_ND_UINT(81, 256, "VUToken::allowed::_6_5")));
      (((contract_1).user_allowed).data_6_6) =
          (Init_sol_uint256_t(GET_ND_UINT(82, 256, "VUToken::allowed::_6_6")));
      (((contract_1).user_balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(83, 256, "VUToken::balances::_0")));
      (((contract_1).user_balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(84, 256, "VUToken::balances::_1")));
      (((contract_1).user_balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(85, 256, "VUToken::balances::_2")));
      (((contract_1).user_balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(86, 256, "VUToken::balances::_3")));
      (((contract_1).user_balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(87, 256, "VUToken::balances::_4")));
      (((contract_1).user_balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(88, 256, "VUToken::balances::_5")));
      (((contract_1).user_balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(89, 256, "VUToken::balances::_6")));
    }
    if (GET_ND_RANGE(92, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(90, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(91, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(93, 0, 12, "next_call"));
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
      PausableToken_Method_For_VUToken_transfer(&(contract_1), sender, value,
                                                blocknum, timestamp, paid,
                                                sender, arg__to, arg__value);
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
      PausableToken_Method_For_VUToken_transferFrom(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling approve(_spender, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(8, 0, 7, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(9, 256, "_value"));
      PausableToken_Method_For_VUToken_approve(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(11, 0, 7, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(12, 256, "_addedValue"));
      PausableToken_Method_For_VUToken_increaseApproval(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(14, 0, 7, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(15, 256, "_subtractedValue"));
      PausableToken_Method_For_VUToken_decreaseApproval(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling pause() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Pausable_Method_For_VUToken_pause(&(contract_1), sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling unpause() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Pausable_Method_For_VUToken_unpause(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 7, "newOwner"));
      Ownable_Method_For_VUToken_transferOwnership(&(contract_1), sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(21, 0, 7, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 7, "_spender"));
      StandardToken_Method_For_VUToken_allowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling burn(_value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(24, 256, "_value"));
      BurnableToken_Method_For_VUToken_burn(&(contract_1), sender, value,
                                            blocknum, timestamp, paid, sender,
                                            arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_VUToken_totalSupply(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling balanceOf(_owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(26, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(27, 0, 7, "_owner"));
      BasicToken_Method_For_VUToken_balanceOf(&(contract_1), sender, value,
                                              blocknum, timestamp, paid, sender,
                                              arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
  }
}