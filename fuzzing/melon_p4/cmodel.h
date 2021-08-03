#pragma once
#include "primitive.h"
void run_model(void);
struct Map_1;
struct Map_2;
struct Melon;
void Melon_Constructor(struct Melon *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_uint256_t func_user___name,
                       sol_uint256_t func_user___symbol,
                       sol_uint8_t func_user___decimals,
                       sol_address_t func_user___council);
void ERC20Detailed_Constructor_For_Melon(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals);
void Init_ERC20Detailed_For_Melon(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin, sol_uint256_t user_name,
                                  sol_uint256_t user_symbol,
                                  sol_uint8_t user_decimals);
void Init_ERC20_For_Melon(struct Melon *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin);
void Init_ERC20Burnable_For_Melon(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_Melon(struct Melon *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin,
                sol_uint256_t user___name, sol_uint256_t user___symbol,
                sol_uint8_t user___decimals, sol_address_t user___council);
void Melon_Method_1_changeCouncil(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_user___newCouncil);
void Melon_Method_changeCouncil(struct Melon *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_model___newCouncil);
void Melon_Method_1_mintInitialSupply(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___initialReceiver);
void Melon_Method_mintInitialSupply(struct Melon *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_address_t func_model___initialReceiver);
void Melon_Method_2_mintInflation(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Melon_Method_1_mintInflation(struct Melon *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Melon_Method_mintInflation(struct Melon *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin);
sol_uint256_t
ERC20Detailed_Method_For_Melon_name(struct Melon *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
sol_uint256_t ERC20Detailed_Method_For_Melon_symbol(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ERC20Detailed_Method_For_Melon_rename(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_s);
sol_uint8_t ERC20Detailed_Method_For_Melon_decimals(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ERC20Burnable_Method_For_Melon_burn(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_value);
void ERC20Burnable_Method_For_Melon_burnFrom(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_uint256_t func_user_value);
sol_uint256_t
ERC20_Method_For_Melon_totalSupply(struct Melon *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin);
sol_uint256_t ERC20_Method_For_Melon_balanceOf(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner);
sol_uint256_t ERC20_Method_For_Melon_allowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender);
sol_bool_t ERC20_Method_For_Melon_transfer(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_Melon_approve(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_Melon_transferFrom(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_Melon_increaseAllowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue);
sol_bool_t ERC20_Method_For_Melon_decreaseAllowance(
    struct Melon *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue);