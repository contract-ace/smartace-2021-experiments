#pragma once
#include "primitive.h"
void run_model(void);
struct Map_3;
struct Roles_Struct_Role;
struct Map_1;
struct Map_2;
struct Token;
void Token_Constructor(struct Token *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin);
void ERC20Detailed_Constructor_For_Token(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals);
void Init_ERC20Detailed_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin, sol_uint256_t user_name,
                                  sol_uint256_t user_symbol,
                                  sol_uint8_t user_decimals);
void Init_ERC20_For_Token(struct Token *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin);
void MinterRole_Constructor_For_Token(struct Token *self, sol_address_t sender,
                                      sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void Init_MinterRole_For_Token(struct Token *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin);
void Init_ERC20Mintable_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_Token(struct Token *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin);
sol_bool_t ERC20Mintable_Method_1_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account,
    sol_uint256_t func_user_amount);
sol_bool_t ERC20Mintable_Method_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account,
    sol_uint256_t func_model_amount);
sol_bool_t MinterRole_Method_For_Token_isMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_1_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account);
void MinterRole_Method_For_Token_renounceMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t
ERC20Detailed_Method_For_Token_name(struct Token *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
sol_uint256_t ERC20Detailed_Method_For_Token_symbol(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint8_t ERC20Detailed_Method_For_Token_decimals(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t
ERC20_Method_For_Token_totalSupply(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin);
sol_uint256_t ERC20_Method_For_Token_balanceOf(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
sol_bool_t ERC20_Method_For_Token_transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_recipient,
    sol_uint256_t func_user_amount);
sol_uint256_t ERC20_Method_For_Token_allowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender);
sol_bool_t ERC20_Method_For_Token_approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_Token_transferFrom(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount);
sol_bool_t ERC20_Method_For_Token_increaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue);
sol_bool_t ERC20_Method_For_Token_decreaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue);
void ERC20_Method_For_Token___mint(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_amount);