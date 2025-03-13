# Russian roulette simulator
# Made by Gabry9110
# main.py: greeter and main code execution


import game


def chooseMode():
    print("Select a mode:")
    print("0) Quit")
    print("1) Single shot")
    # only single shot mode for now, can possibly add more modes later on

    while True:  # python doesnt have do-while loops
        modeChosen = input()
        # at first, I put the input() outside of the loop and got rekt lmao
        try:
            modeChosen = int(modeChosen)  # we need an int to determine mode
            break
        except ValueError:  # user is a dum dum
            print("Invalid input, try again!")
    
    return modeChosen


def main():
    print("Welcome to russian roulette simulator!")

    while True:
        mode = chooseMode()
        # python also doesn't have switchcase, might implement a dict or something if i ever want to
        if mode == 0:
            print("Quitting...")
            return
        elif mode == 1:
            game.singleShot()




if __name__ == "__main__":
    main()