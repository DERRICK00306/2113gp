## Derrick's requirement
1. the rate of return for each asset should be return in update_asset_price function. it should be calculated as  
   (current_price - previous_price) / previous_price, and it should be in 2 precision for example (120- 110)/ 110
   = 0.90909, hence you should return 9 (as an integer)
