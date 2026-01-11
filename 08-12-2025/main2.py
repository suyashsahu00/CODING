import matplotlib.pyplot as plt

#data
rounds=['Round 1', 'Round 2', 'Round 3']
team_A_Score=[20,35,30]
team_B_Score=[25,32,34]

#2. Creating the plot
# Team A bar 

plt.bar(rounds,team_A_Score,label="Team A",color="purple")

#Team B bar above team a
plt.bar(rounds, team_B_Score,bottom=team_A_Score,label="Team B",color="orange")

#3. Adding Labels and Legends 
plt.xlabel("Rounds")
plt.ylabel("Score")
plt.title("Team Scoreboard")

# plt.legend() #help in differentiating differen color

#show()
plt.show()
