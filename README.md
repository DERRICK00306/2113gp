# HKU COMP 2113 Group Project ---- Investment Game

#### Team members:
- Chupeng Ou 3035771854
- Ziteng Xu 3035771696

#### Description:

This is an investment simulation game in which the player invests in the financial market and aims to generate the highest earnings. 
World events and news will occur and result in unpredicted effects on asset prices. Insightful investors shall take quick actions to
change their market positions given a limited time to play. Alternatively, you may consider consulting with Sir Derrick, an affluent,
witted broker who is always willing to offer you some nice deals. Additionally, you may borrow from your mom to achieve your dream of
being a tycoon! However, everything comes with a cost… 

#### Rules:
This is a turn-based game with a limited total playing time (e.g., 3 mins). The player has an initial capital for investment. 

Every turn:  
1. Updated asset prices will be displayed and breaking news might occur. 
2. The player may purchase assets in the market directly, make a deal with a third party, and borrow money from mom. The player
can take up to two actions in total in each turn. 
3. The player may check their current holdings, gains, or losses anytime. 
4. The player may finish this turn anytime. 
5. Mom will relentlessly ask you for some favors if she has lent you some money (consider that as an interest).  

Notes: 

1. The news may reflect the future market trend to a certain extent; the player is expected to analyze its impact and 
make transactions accordingly. 
2. The third-party provides bulk purchase opportunities. The deals come with discounted prices but high quantities – 
the player may have to commit a significant amount of money to enjoy a discount.  
3. Borrowing is limited to a specific proportion of your total asset value (The proportion is to be confirmed).  Loans
 will be deducted from your total earnings and you may not repay them in advance. 
4. The turn will end automatically if the player completes two actions and their current holdings and liabilities 
(i.e. borrowings from your mom) will be printed.  
5. A list of transactions, the final holding asset and return will be printed at the end of the game (or when the player goes bankrupt). 


Goal:
1. Achieve as much return as possible within the limited time period. 
2. Try not to be broke – mom will be really mad if you don’t have enough money to buy her a mother’s day gift.

#### Features:

1.	Asset price fluctuation every turn
Multiple assets including stocks, oils, gold, and bitcoins are tradable in the game. Asset prices change every turn. The price variation is stochastic, and prices will be shown at the beginning of every turn. The game uses an array to store the current price of assets. The function implementing price fluctuations will be stored in a separate file.

2.	Execute transaction orders
The player executes transactions via input. The player will input the number of shares/quantities of the asset they want to purchase, and the trade will then be executed. An array storing the player’s asset holdings will be updated. Recording your transactions in the aggregated transaction history necessitates the usage of dynamic memory management.

3.	Check currently holding assets
The player checks their holding assets via input. A multi-dimensional array that stores the price, quantity and current gains or losses of your current holding will be shown. The array will be stored in a separate file to keep the main file clear and readable.

4.	Make a deal with a third-party
A third-party (i.e., Sir Derrick) will offer the player deals of a randomly chosen asset with a randomly generated price. The offers would be printed on the screen, while the player inputs yes or no to indicate whether they will accept the deal. If you accept the offer from Sir Derrick, your current holding will be updated. The game will also record the deal in the player’s transaction history by dynamic memory management, and a text will be shown for confirmation. This feature will be realized in a separate file to keep the main file clear and readable.

5.	Borrow fund 
The player borrows funds via input. The player can borrow money from mom to expand their investment. The player may input the amount of money they want to borrow, and his total loans will be updated. It will be stored in a separate file to make the main function clear and readable.

6.	Receive market news
The game will randomly draw market news from a news pool at a particular timepoint. Then it calls a corresponding news function that prints the news content on the screen and impels the market to fluctuate. Those news functions shall be stored in separate files.

7.	Review transactions history
Every transaction and deal will be automatically recorded in a transaction history array with dynamic memory as indicated in (2) and (4). It will be printed at the end of the game (or when the player goes bankrupt).

#### Asset list (Price in US Dollars)

Stocks:
1. Apple 
2. Tesla
3. Microsoft
4. Amazon
#### Commodities:
1. Crude oil
2. Gold
#### Cryptocurrency:
1. Bitcoin
#### Foreign currency:
1. Chinese Yuan





