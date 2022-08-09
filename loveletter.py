def rotateWord(str,k):
    
    strRotate = str.split()
    
    for i in range(0,k):
     
     for j in range(0, len(strRotate)):
        
        strRotate[j] = strRotate[j][1:] + strRotate[j][0]
    
    count = 0
    
    for k in range(0, len(strRotate)):
        
        if strRotate[k] in str:
            
            count+=1
    print(count)

rotateWord("adaada", 3)
rotateWord("loHel endFri", 3)
rotateWord("Hello dFrien", 5)