# HKU COMP 2113 Group Project ---- Investment Game

#### Team members:
- Chupeng Ou 3035771854
- Ziteng Xu 3035771696

#### Description:

This is an investment simulation game in which the player invests in the financial market and aims to generate the highest earnings. 
World events and news will occur and result in unpredicted effects on asset prices. Insightful investors shall take quick actions to
change their market positions given a limited time to play. Alternatively, you may consider consulting with Sir Derrick, an affluent,
witted broker who is always willing to offer you some nice deals. Additionally, you may borrow from your mom to achieve your dream of
being a tycoon! However, everything comes with a cost, you have to pay the interest for borrowing. Try to earn as much money as possible
in a specific number of rounds !

#### Rules:
This is a game with a limited total playing round (e.g., 3 mins). The player has an initial capital for investment. 

Every turn:  
A board of command list will be shown in the screen to inform you the available command in each round:

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

1. Asset price fluctuation every turn	 
We created a new data structure "Asset" and used array to store the information of designed multiple assets, includeing famous stock, oils, gold, and bitcoins that are tradable in our game. Random generation is implenmented in the game to make the stock price random and closer to the real-world market. Additionally, in each run, market information will be updated and automatically shown up in case the player can't get the latest information. Last but not least, multiple functions that saved in different file are used well to implement this feature.

2.	Execute and review transaction orders
The randomly generated stock price will be stored in a newly created data structure "Transaction" whenever the player want to buy/ sell the stock at a good price. All historical trade information will be automatically stored in a "Transaction" array for your future evaluation while the current execution price and quantity will be stored in other portfolio array for the player to check whenever they want. Pointer and dynamic memory management are used to growth for the transaction review because we couldn't know how many execution command will be inputted by the user. Input the specific command that are shown in the standard command listed to run this function, prompt feedback ( information board ) will be shown on the terminal to show the progress made. Multiple functions are saved in different files and used to implement this fearture.

3.	Check currently holding assets
As mentioned above, a new data structure is created and used for the player to check their current holding position, a well-organized will be shown on the terminal if the corrected command are inputted ( instructed by a board of command list). Multiple functions are saved in different files and used to implement this fearture.


4.	Make a deal with a third-party
A third-party (i.e., Sir Derrick) will offer the player deals of a randomly chosen asset with a randomly generated price. The offers would be printed on the screen, while the player inputs yes or no to indicate whether they will accept the deal. If you accept the offer from Sir Derrick, your current holding will be updated. The game will also record the deal in the player’s transaction history by dynamic memory management, and a text will be shown for confirmation. This feature will be realized in a separate file to keep the main file clear and readable.

5.	Borrow fund and pay interest
The player borrows funds via input. The player can borrow money from mom to expand their investment. The player may input the amount of money they want to borrow, and his total loans will be updated. It will be stored in a separate file to make the main function clear and readable.

6.	Receive market news
The game will randomly draw market news from a news pool at a particular timepoint. Then it calls a corresponding news function that prints the news content on the screen and implys the market to fluctuate. 


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


#### Quick Start 

![Qucik Start Image 1](https://github.com/DERRICK00306/2113gp/blob/main/1.jpg)

As shown in the above images, a list of command that is available will be automatically printed on the terminal each time if you finish a previous command in case the player can't remember the command. For example, if command 1 is inputtd, all the assets list will be firstly printed, then the program will ask you for more information (e.g. asset name, buy or sell, quantitit, etc.)

![Qucik Start Image 1](https://github.com/DERRICK00306/2113gp/blob/main/2.jpg)

You could find that your portfolio table will also be printed it out whenever there is a updated information added into it. The Apple stock row is changed to match your latest holding information. After the whole execution of the command 1, the listed of command will be printed again. In this example, 6 are inputted, so the well - designed portfolio is printed again.


