#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
GHOST_VAR int called_1;
GHOST_VAR sol_uint256_t last;
struct Map_3 {
  sol_bool_t sum;
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
};
struct Roles_Struct_Role {
  struct Map_3 user_bearer;
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
struct Token {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Roles_Struct_Role user___minters;
  sol_uint256_t user___name;
  sol_uint256_t user___symbol;
  sol_uint8_t user___decimals;
  struct Map_1 user___balances;
  struct Map_2 user___allowances;
  sol_uint256_t user___totalSupply;
};
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat);
struct Roles_Struct_Role ZeroInit_Roles_Struct_Role(void);
struct Roles_Struct_Role Init_Roles_Struct_Role(void);
struct Roles_Struct_Role ND_Roles_Struct_Role(void);
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account);
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account);
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
void ERC20_Method_For_Token___transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount);
void ERC20_Method_For_Token___approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender, sol_uint256_t func_user_value);
void MinterRole_Method_For_Token___addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_For_Token___removeMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) + ((func_user_b).v));
  sol_require(((func_user_c).v) >= ((func_user_a).v),
              "SafeMath: addition overflow");
  { return Init_sol_uint256_t((func_user_c).v); }
}
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_require(((func_user_b).v) <= ((func_user_a).v),
              "SafeMath: subtraction overflow");
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v));
  { return Init_sol_uint256_t((func_user_c).v); }
}
struct Map_3 ZeroInit_Map_3(void) {
  struct Map_3 tmp;
  ((tmp).sum) = (Init_sol_bool_t(0));
  ((tmp).data_0) = (Init_sol_bool_t(0));
  ((tmp).data_1) = (Init_sol_bool_t(0));
  ((tmp).data_2) = (Init_sol_bool_t(0));
  ((tmp).data_3) = (Init_sol_bool_t(0));
  ((tmp).data_4) = (Init_sol_bool_t(0));
  ((tmp).data_5) = (Init_sol_bool_t(0));
  ((tmp).data_6) = (Init_sol_bool_t(0));
  return tmp;
}
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
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
  return Init_sol_bool_t(0);
}
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat) {
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
struct Roles_Struct_Role ZeroInit_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp;
  ((tmp).user_bearer) = (ZeroInit_Map_3());
  return tmp;
}
struct Roles_Struct_Role Init_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp = ZeroInit_Roles_Struct_Role();
  return tmp;
}
struct Roles_Struct_Role ND_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp;
  return tmp;
}
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account) {
  sol_require(!((Roles_Method_has(func_user_role,
                                  Init_sol_address_t((func_user_account).v)))
                    .v),
              "Roles: account already has role");
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(1));
}
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account) {
  sol_require((Roles_Method_has(func_user_role,
                                Init_sol_address_t((func_user_account).v)))
                  .v,
              "Roles: account does not have role");
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(0));
}
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account) {
  sol_require(((func_user_account).v) != (g_literal_address_0),
              "Roles: account is the zero address");
  {
    return Init_sol_bool_t(
        (Read_Map_3(&((func_user_role)->user_bearer),
                    Init_sol_address_t((func_user_account).v)))
            .v);
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
void Token_Constructor(struct Token *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin) {}
void ERC20Detailed_Constructor_For_Token(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals) {
  ((self->user___name).v) = ((func_user_name).v);
  ((self->user___symbol).v) = ((func_user_symbol).v);
  ((self->user___decimals).v) = ((func_user_decimals).v);
}
void Init_ERC20Detailed_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin, sol_uint256_t user_name,
                                  sol_uint256_t user_symbol,
                                  sol_uint8_t user_decimals) {
  ((self)->user___name) = (Init_sol_uint256_t(0));
  ((self)->user___symbol) = (Init_sol_uint256_t(0));
  ((self)->user___decimals) = (Init_sol_uint8_t(0));
  ERC20Detailed_Constructor_For_Token(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin, user_name,
                                      user_symbol, user_decimals);
}
void Init_ERC20_For_Token(struct Token *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowances) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void MinterRole_Constructor_For_Token(struct Token *self, sol_address_t sender,
                                      sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  MinterRole_Method_For_Token___addMinter(self, sender, value, blocknum,
                                          timestamp, Init_sol_bool_t(0), origin,
                                          Init_sol_address_t((sender).v));
}
void Init_MinterRole_For_Token(struct Token *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  ((self)->user___minters) = (ZeroInit_Roles_Struct_Role());
  MinterRole_Constructor_For_Token(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_ERC20Mintable_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  Init_MinterRole_For_Token(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
}
void Init_Token(struct Token *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_ERC20Detailed_For_Token(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t(11), Init_sol_uint256_t(12), Init_sol_uint8_t(18));
  Init_ERC20_For_Token(self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin);
  Init_ERC20Mintable_For_Token(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
  Token_Constructor(self, sender, value, blocknum, timestamp,
                    Init_sol_bool_t(0), origin);
}
sol_bool_t ERC20Mintable_Method_1_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account,
    sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___mint(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin,
                                Init_sol_address_t((func_user_account).v),
                                Init_sol_uint256_t((func_user_amount).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20Mintable_Method_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account,
    sol_uint256_t func_model_amount) {
  sol_bool_t func_model_rv;
  sol_require((MinterRole_Method_For_Token_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              "MinterRole: caller does not have the Minter role");
  (func_model_rv) = (ERC20Mintable_Method_1_For_Token_mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_account, func_model_amount));
  return func_model_rv;
}
sol_bool_t MinterRole_Method_For_Token_isMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  {
    return Init_sol_bool_t(
        (Roles_Method_has(&(self->user___minters),
                          Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
void MinterRole_Method_1_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  MinterRole_Method_For_Token___addMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_account).v));
}
void MinterRole_Method_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account) {
  sol_require((MinterRole_Method_For_Token_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              "MinterRole: caller does not have the Minter role");
  MinterRole_Method_1_For_Token_addMinter(self, sender, value, blocknum,
                                          timestamp, Init_sol_bool_t(0), origin,
                                          func_model_account);
}
void MinterRole_Method_For_Token_renounceMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MinterRole_Method_For_Token___removeMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
sol_uint256_t
ERC20Detailed_Method_For_Token_name(struct Token *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___name).v); }
}
sol_uint256_t ERC20Detailed_Method_For_Token_symbol(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___symbol).v); }
}
sol_uint8_t ERC20Detailed_Method_For_Token_decimals(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint8_t((self->user___decimals).v); }
}
sol_uint256_t
ERC20_Method_For_Token_totalSupply(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_For_Token_balanceOf(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_Token_transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_recipient,
    sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___transfer(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    Init_sol_address_t((sender).v),
                                    Init_sol_address_t((func_user_recipient).v),
                                    Init_sol_uint256_t((func_user_amount).v));
  { return Init_sol_bool_t(1); }
}
sol_uint256_t ERC20_Method_For_Token_allowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowances),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_Token_approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_transferFrom(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___transfer(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    Init_sol_address_t((func_user_sender).v),
                                    Init_sol_address_t((func_user_recipient).v),
                                    Init_sol_uint256_t((func_user_amount).v));
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_sender).v), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((func_user_sender).v),
                               Init_sol_address_t((sender).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_increaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_addedValue).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_decreaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_subtractedValue).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
void ERC20_Method_For_Token___mint(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_amount) {
  sol_require(((func_user_account).v) != (g_literal_address_0),
              "ERC20: mint to the zero address");
  ((self->user___totalSupply).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user___totalSupply).v),
                            Init_sol_uint256_t((func_user_amount).v)))
           .v);
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_account).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_account).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  {
    g_literal_address_0;
    (func_user_account).v;
    (func_user_amount).v;
    sol_emit("Transfer(address(0), account, amount)");
  }
}
void ERC20_Method_For_Token___transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount) {
  sol_require(((func_user_sender).v) != (g_literal_address_0),
              "ERC20: transfer from the zero address");
  sol_require(((func_user_recipient).v) != (g_literal_address_0),
              "ERC20: transfer to the zero address");
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_sender).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_recipient).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_recipient).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  {
    (func_user_sender).v;
    (func_user_recipient).v;
    (func_user_amount).v;
    sol_emit("Transfer(sender, recipient, amount)");
  }
}
void ERC20_Method_For_Token___approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender, sol_uint256_t func_user_value) {
  sol_require(((func_user_owner).v) != (g_literal_address_0),
              "ERC20: approve from the zero address");
  sol_require(((func_user_spender).v) != (g_literal_address_0),
              "ERC20: approve to the zero address");
  Write_Map_2(&(self->user___allowances),
              Init_sol_address_t((func_user_owner).v),
              Init_sol_address_t((func_user_spender).v),
              Init_sol_uint256_t((func_user_value).v));
  {
    (func_user_owner).v;
    (func_user_spender).v;
    (func_user_value).v;
    sol_emit("Approval(owner, spender, value)");
  }
}
void MinterRole_Method_For_Token___addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_add(&(self->user___minters),
                   Init_sol_address_t((func_user_account).v));
  {
    (func_user_account).v;
    sol_emit("MinterAdded(account)");
  }
}
void MinterRole_Method_For_Token___removeMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_remove(&(self->user___minters),
                      Init_sol_address_t((func_user_account).v));
  {
    (func_user_account).v;
    sol_emit("MinterRemoved(account)");
  }
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(36, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(37, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Token contract_1;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  smartace_log("[Initializing contract_1]");
  if (GET_ND_RANGE(40, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(38, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(39, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(41, 2, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Token(&(contract_1), sender, value, blocknum, timestamp, paid, sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
    }
    if (sol_is_using_reps()) {
      ((((contract_1).user___minters).user_bearer).data_0) = (Init_sol_bool_t(
          GET_ND_RANGE(42, 0, 2, "Token::_minters::bearer::_0")));
      ((((contract_1).user___minters).user_bearer).data_1) = (Init_sol_bool_t(
          GET_ND_RANGE(43, 0, 2, "Token::_minters::bearer::_1")));
      ((((contract_1).user___minters).user_bearer).data_2) = (Init_sol_bool_t(
          GET_ND_RANGE(44, 0, 2, "Token::_minters::bearer::_2")));
      ((((contract_1).user___minters).user_bearer).data_3) = (Init_sol_bool_t(
          GET_ND_RANGE(45, 0, 2, "Token::_minters::bearer::_3")));
      ((((contract_1).user___minters).user_bearer).data_4) = (Init_sol_bool_t(
          GET_ND_RANGE(46, 0, 2, "Token::_minters::bearer::_4")));
      ((((contract_1).user___minters).user_bearer).data_5) = (Init_sol_bool_t(
          GET_ND_RANGE(47, 0, 2, "Token::_minters::bearer::_5")));
      ((((contract_1).user___minters).user_bearer).data_6) = (Init_sol_bool_t(
          GET_ND_RANGE(48, 0, 2, "Token::_minters::bearer::_6")));
      (((contract_1).user___balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Token::_balances::_0")));
      (((contract_1).user___balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Token::_balances::_1")));
      (((contract_1).user___balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(51, 256, "Token::_balances::_2")));
      (((contract_1).user___balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Token::_balances::_3")));
      (((contract_1).user___balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(53, 256, "Token::_balances::_4")));
      (((contract_1).user___balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(54, 256, "Token::_balances::_5")));
      (((contract_1).user___balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "Token::_balances::_6")));
      (((contract_1).user___allowances).data_0_0) = (Init_sol_uint256_t(
          GET_ND_UINT(56, 256, "Token::_allowances::_0_0")));
      (((contract_1).user___allowances).data_0_1) = (Init_sol_uint256_t(
          GET_ND_UINT(57, 256, "Token::_allowances::_0_1")));
      (((contract_1).user___allowances).data_0_2) = (Init_sol_uint256_t(
          GET_ND_UINT(58, 256, "Token::_allowances::_0_2")));
      (((contract_1).user___allowances).data_0_3) = (Init_sol_uint256_t(
          GET_ND_UINT(59, 256, "Token::_allowances::_0_3")));
      (((contract_1).user___allowances).data_0_4) = (Init_sol_uint256_t(
          GET_ND_UINT(60, 256, "Token::_allowances::_0_4")));
      (((contract_1).user___allowances).data_0_5) = (Init_sol_uint256_t(
          GET_ND_UINT(61, 256, "Token::_allowances::_0_5")));
      (((contract_1).user___allowances).data_0_6) = (Init_sol_uint256_t(
          GET_ND_UINT(62, 256, "Token::_allowances::_0_6")));
      (((contract_1).user___allowances).data_1_0) = (Init_sol_uint256_t(
          GET_ND_UINT(63, 256, "Token::_allowances::_1_0")));
      (((contract_1).user___allowances).data_1_1) = (Init_sol_uint256_t(
          GET_ND_UINT(64, 256, "Token::_allowances::_1_1")));
      (((contract_1).user___allowances).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(65, 256, "Token::_allowances::_1_2")));
      (((contract_1).user___allowances).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(66, 256, "Token::_allowances::_1_3")));
      (((contract_1).user___allowances).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(67, 256, "Token::_allowances::_1_4")));
      (((contract_1).user___allowances).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(68, 256, "Token::_allowances::_1_5")));
      (((contract_1).user___allowances).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(69, 256, "Token::_allowances::_1_6")));
      (((contract_1).user___allowances).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(70, 256, "Token::_allowances::_2_0")));
      (((contract_1).user___allowances).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(71, 256, "Token::_allowances::_2_1")));
      (((contract_1).user___allowances).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(72, 256, "Token::_allowances::_2_2")));
      (((contract_1).user___allowances).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(73, 256, "Token::_allowances::_2_3")));
      (((contract_1).user___allowances).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(74, 256, "Token::_allowances::_2_4")));
      (((contract_1).user___allowances).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(75, 256, "Token::_allowances::_2_5")));
      (((contract_1).user___allowances).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(76, 256, "Token::_allowances::_2_6")));
      (((contract_1).user___allowances).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(77, 256, "Token::_allowances::_3_0")));
      (((contract_1).user___allowances).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(78, 256, "Token::_allowances::_3_1")));
      (((contract_1).user___allowances).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(79, 256, "Token::_allowances::_3_2")));
      (((contract_1).user___allowances).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(80, 256, "Token::_allowances::_3_3")));
      (((contract_1).user___allowances).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(81, 256, "Token::_allowances::_3_4")));
      (((contract_1).user___allowances).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(82, 256, "Token::_allowances::_3_5")));
      (((contract_1).user___allowances).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(83, 256, "Token::_allowances::_3_6")));
      (((contract_1).user___allowances).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "Token::_allowances::_4_0")));
      (((contract_1).user___allowances).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(85, 256, "Token::_allowances::_4_1")));
      (((contract_1).user___allowances).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(86, 256, "Token::_allowances::_4_2")));
      (((contract_1).user___allowances).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(87, 256, "Token::_allowances::_4_3")));
      (((contract_1).user___allowances).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(88, 256, "Token::_allowances::_4_4")));
      (((contract_1).user___allowances).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(89, 256, "Token::_allowances::_4_5")));
      (((contract_1).user___allowances).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(90, 256, "Token::_allowances::_4_6")));
      (((contract_1).user___allowances).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(91, 256, "Token::_allowances::_5_0")));
      (((contract_1).user___allowances).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(92, 256, "Token::_allowances::_5_1")));
      (((contract_1).user___allowances).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(93, 256, "Token::_allowances::_5_2")));
      (((contract_1).user___allowances).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(94, 256, "Token::_allowances::_5_3")));
      (((contract_1).user___allowances).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(95, 256, "Token::_allowances::_5_4")));
      (((contract_1).user___allowances).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(96, 256, "Token::_allowances::_5_5")));
      (((contract_1).user___allowances).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(97, 256, "Token::_allowances::_5_6")));
      (((contract_1).user___allowances).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(98, 256, "Token::_allowances::_6_0")));
      (((contract_1).user___allowances).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(99, 256, "Token::_allowances::_6_1")));
      (((contract_1).user___allowances).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "Token::_allowances::_6_2")));
      (((contract_1).user___allowances).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "Token::_allowances::_6_3")));
      (((contract_1).user___allowances).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "Token::_allowances::_6_4")));
      (((contract_1).user___allowances).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "Token::_allowances::_6_5")));
      (((contract_1).user___allowances).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "Token::_allowances::_6_6")));
    }
    if (GET_ND_RANGE(107, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(105, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(106, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(108, 0, 16, "next_call"));
    called_1 = 0;
    last = contract_1.user___totalSupply;
    switch (next_call) {
    case 0: {
      smartace_log("[Calling mint(account, amount) on contract_1]");
      called_1 = 1;
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(0, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(1, 0, 7, "account"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(2, 256, "amount"));
      ERC20Mintable_Method_For_Token_mint(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_account, arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling isMinter(account) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(4, 0, 7, "account"));
      MinterRole_Method_For_Token_isMinter(&(contract_1), sender, value,
                                           blocknum, timestamp, paid, sender,
                                           arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling addMinter(account) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(6, 0, 7, "account"));
      MinterRole_Method_For_Token_addMinter(&(contract_1), sender, value,
                                            blocknum, timestamp, paid, sender,
                                            arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling renounceMinter() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MinterRole_Method_For_Token_renounceMinter(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling name() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_name(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling symbol() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_symbol(&(contract_1), sender, value,
                                            blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling decimals() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_decimals(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_For_Token_totalSupply(&(contract_1), sender, value, blocknum,
                                         timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling balanceOf(account) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(13, 0, 7, "account"));
      ERC20_Method_For_Token_balanceOf(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender, arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling transfer(recipient, amount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_recipient =
          Init_sol_address_t(GET_ND_RANGE(15, 0, 7, "recipient"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(16, 256, "amount"));
      ERC20_Method_For_Token_transfer(&(contract_1), sender, value, blocknum,
                                      timestamp, paid, sender, arg_recipient,
                                      arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(owner, spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(18, 0, 7, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 7, "spender"));
      ERC20_Method_For_Token_allowance(&(contract_1), sender, value, blocknum,
                                       timestamp, paid, sender, arg_owner,
                                       arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling approve(spender, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(21, 0, 7, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(22, 256, "value"));
      ERC20_Method_For_Token_approve(&(contract_1), sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log(
          "[Calling transferFrom(sender, recipient, amount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_sender =
          Init_sol_address_t(GET_ND_RANGE(24, 0, 7, "sender"));
      sol_address_t arg_recipient =
          Init_sol_address_t(GET_ND_RANGE(25, 0, 7, "recipient"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(26, 256, "amount"));
      ERC20_Method_For_Token_transferFrom(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_sender, arg_recipient, arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 7, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(29, 256, "addedValue"));
      ERC20_Method_For_Token_increaseAllowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(30, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(31, 0, 7, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(32, 256, "subtractedValue"));
      ERC20_Method_For_Token_decreaseAllowance(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling _mint(account, amount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(33, 2, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(34, 0, 7, "account"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(35, 256, "amount"));
      ERC20_Method_For_Token___mint(&(contract_1), sender, value, blocknum,
                                    timestamp, paid, sender, arg_account,
                                    arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    default: {
      sol_require(0, "Model failure, next_call out of bounds.");
    }
    }
    sol_assert(called_1 || contract_1.user___totalSupply.v == last.v, 0);
  }
}