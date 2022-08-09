
 

def longestPalSubstr(str):
     
    
    n = len(str)

    maxLength = 1
    start = 0
     

    for i in range(n):
        for j in range(i, n):
            flag = 1
             

            for k in range(0, ((j - i) // 2) + 1):
                if (str[i + k] != str[j - k]):
                    flag = 0
 
           
            if (flag != 0 and (j - i + 1) > maxLength):
                start = i
                maxLength = j - i + 1
                 
    print("Longest palindrome subString is: ", end = "")
    for i in range(start, start+maxLength ):
        print(str[i], end = "")

 
    return maxLength
 

if __name__ == '__main__':
 
    str = "babad"
     
    print("\nLength is: ", longestPalSubstr(str))