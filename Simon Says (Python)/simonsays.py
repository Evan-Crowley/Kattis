"""
Evan Crowley
Kattis - Simon Says
https://open.kattis.com/problems/simonsays
"""
def simonRead(Simon):
    line = input()
    if line.find("Simon says"):
        pass
    else:
        line = line.replace("Simon says ","")
        Simon += line + '\n'
    return Simon
  
def main():
    inum = int(input())
    Simon = """"""
    i = 0
    for i in range(0,inum):
        Simon = simonRead(Simon)
    Simon = Simon[:-1]
    print(Simon)

if __name__ == "__main__":
    main()