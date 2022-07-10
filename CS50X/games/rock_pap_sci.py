import random
def play():
    user = input('''What's your choice? 'r' for rock, 'p' for paper, 's' for scissors: ''')
    computer = random.choice(['r','p','s'])
    if computer == 'r':
        print("Computer chose rock.")
    if computer == 's':
        print("computer chose scissors.")
    else:
        print("computer chose paper")

    if user == computer:
        return 'It\'s a Tie.'
    if you_win(user, computer):
        return 'You won!'

    return 'You lost!'
    # r > s, s > p, p > r
def you_win(player, opponent):
     if (player == 'r' and opponent == 's') or (player == 's' and opponent == 'p') or (player == 'p' and opponent == 's'):
        return True

print(play())