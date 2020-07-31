for _ in range(int(input())):
    s=input().lower()
    #print(s)
    if "berhampore" in s and "serampore" not in s:
        print("GCETTB")
    elif "serampore" in s and "berhampore"not in s:
        print("GCETTS")
    elif "berhampore" and "serampore" in s:
        print("Both")
    else:
        print("Others")