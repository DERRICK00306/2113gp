# HKU COMP 2113 Group Project ---- Investment Game

#### Team members:
- Chupeng Ou 3035771854
- Ziteng Xu 3035771696


![Introduction](https://github.com/DERRICK00306/2113gp/blob/main/3.jpg)

#### Description:

This is an investment simulation game in which the player invests in the financial market and aims to generate the highest earnings.
World events and news will occur while insightful investors shall take quick actions to
change their market positions given a limited number of rounds to play. Alternatively, you may consider consulting with Sir Derrick, an affluent,
witted broker who is always willing to offer you deals with discount. Additionally, you may borrow from your mom to achieve your dream of
being a tycoon! However, you have to pay for some family events with the payment proportional to your borrowing amount. Try to earn as much money as possible
in ten rounds !

#### Rules:
The game has ten rounds in total. The player has an initial capital of $1,000,000 for investment.

Every round:  
A board of command list will be displayed to show the available actions in each turn:

1. Updated asset prices will be displayed and breaking news might occur.
2. You may purchase assets in the market directly, make a deal with a third party, or borrow money from mom.
3. The player may check their current holdings, gains, or losses anytime.
4. The player may finish this turn anytime.
5. There's no interests for your borrowing, since you borrowed from your mom. Nonetheless, Mom will relentlessly ask you for some favors if she has lent you some money, which entails payment proportional to your borrowing amount.
6. You may end the round when you finish all actions you deem necessary and proceed to the next round.
7. Never have your cash down to zero. You will automatically become bankrupt and the game will end immediately.
8. The game will end automatically after ten rounds and your net investment return will be displayed.


Notes:

1. The third-party provides bulk purchase opportunities. The deals come with discounted prices but always high quantities –
the player may have to commit a significant amount of money to enjoy a discount.
2. The total amount of borrowing may not exceed $1,000,000. Loans will be deducted from your total earnings at the end of the game and you can not repay them in advance.
3. You may choose to end the game in advance by typing in '-1' in the command panel.
4. A list of transactions, the final holding asset and return will be printed at the end of the game (or when the player goes bankrupt).


Goal:
1. Achieve as much return as possible within the limited rounds.
2. Try not to be broke – mom will be really mad if you don’t have enough money to buy her a mother’s day gift.

#### Features:

1. Asset price fluctuation and asset information storage
We created a new data structure "Asset" and used array to store the information of eight pre-designed assets, featuring representative stocks, oils, gold, and bitcoins and all of which are tradable in our game. Asset prices are randomly generated to simulate the real-world market. Additionally, market information will be updated and automatically shown up each round. Multiple functions saved in different files are used to implement the above features.

2.	Transaction order execution and review
The randomly generated asset price will be stored in a newly created data structure "Transaction" whenever the player want to buy or sell the asset. All historical trade information will be automatically stored in a "Transaction" array for future evaluation while the current transaction price and quantity will be stored in another portfolio array accessible to the player at any time. Since the total number of transaction commands that the user would like to implement is unknown prior to the game, pointers and dynamic memory management are applied to grow the dynamic array and facilitate later transaction review. All transaction history will be shown upon the termination of the game as the file output, while the player may access it anytime during their game. Multiple functions are saved in different files and comprehensively used to implement this feature.

3.	Check currently holding assets
As mentioned above, a new data structure "Asset" is created for the player to check their current holdings. A nicely organized chart will be shown on the terminal upon the reception of the corresponding input command. Multiple functions are saved in different files and used to implement this feature.

4.	Make a deal with a third-party
A third-party (i.e., Sir Derrick) will offer the player deals of a randomly chosen asset with a randomly generated price. The offers would be printed on the screen, while the player inputs yes or no to indicate whether they will accept the deal. If you accept the offer from Sir Derrick, your current holding will be updated. The game will also record the deal in the player’s transaction history by dynamic memory management, and a text will be shown for confirmation. This feature will be realized in a separate file to keep the main file clear and readable.

5.	Borrow fund and pay interest
The player can borrow money from mom to expand their investment. They may input the amount of money they want to borrow, and the total loans will be updated. The function is stored in a separate file to improve the main file's readability.

6.	Market news
The game will randomly draw market news from a news pool at the beginning of each round. It calls a corresponding news function that outputs the news content on the screen. The function is stored in a separate file to improve the main file's readability.


#### Asset list (Price in US Dollars)

#### Stocks:
1. Apple
2. Tesla
3. Microsoft
4. Amazon
#### Commodities:
1. Crude oil
2. Gold
#### Cryptos:
1. Bitcoin
#### Foreign currency:
1. Chinese Yuan

#### Non-standard libraries
No non-standard libraries are used in our program.

#### Quick Start
Implement the following two lines of code to compile and execute this game.
> make main
 ./main
