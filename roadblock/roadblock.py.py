import os
import time
import sys

from Tkinter import *

tkroot = Tk()


mapa = ["+++++++++++++++++++++++++++++++++++++++++++++++++",
        "+                                               +",
        "+                                               +",
        "+      **J        ***                **X        +",
        "+                 ***                 *         +",
        "+                 *              *              +",
        "+                 *                     *       +",
        "+    *  *                     *   *     *       +",
        "+     * *                    **** *             +",
        "+     *                                 *       +",
        "+                                      **       +",
        "+                        **            **       +",
        "+                                               +",
        "+             ** *       ***                    +",
        "+             ***                               +",
        "+             **                  **            +",
        "+      **                         **            +",
        "+      **                         *             +",
        "+        *            **                        +",
        "+                    ***                        +",
        "+                   * **                        +",
        "+                                               +",
        "+++++++++++++++++++++++++++++++++++++++++++++++++"]
mapa1 = ["+++++++++++++++++++++++++++++++++++++++++++++++++",
        "+            **                                 +",
        "+                      ***                      +",
        "+      **              J******                  +",
        "+      *                              *         +",
        "+                                   ***         +",
        "+    ***                X                       +",
        "+      *  ***                           *       +",
        "+      *                                *       +",
        "+     **                                *       +",
        "+                                  ** * *       +",
        "+                        **           *         +",
        "+                         *           **        +",
        "+             **         **           *         +",
        "+             ***                     *         +",
        "+                                     *         +",
        "+   ******        *****               *         +",
        "+    ****                                       +",
        "+        *            **            ***         +",
        "+                     **                        +",
        "+                     **                        +",
        "+                                               +",
        "+++++++++++++++++++++++++++++++++++++++++++++++++"]
mapa2= ["+++++++++++++++++++++++++++++++++++++++++++++++++",
        "+           **                      **        **+",
        "+     ***   **       ***                      **+",
        "+     ***               ***               **    +",
        "+     **                   *   **       * ** ***+",
        "+     **  ***   J          *            * ** ***+",
        "+         ***   *          *              ** ***+",
        "+                                           X   +",
        "+                                         ** ***+",
        "+                                         ** ***+",
        "+                                 **      ** ***+",
        "+                        **                     +",
        "+                         *                  ***+",
        "+                        **                  ***+",
        "+             ** **                             +",
        "+             ** **               **            +",
        "+                             **  ** **         +",
        "+             ** **           **     **         +",
        "+      ***    ** **   **    **                  +",
        "+      ***            **    **      **          +",
        "+                                   **          +",
        "+           **                                  +",
        "+++++++++++++++++++++++++++++++++++++++++++++++++"]



mapa3= ["++++++++++++++++++++++++++++++",
        "+** * * ****   ***** ** * ***+",
        "+**            *****         +",
        "+**               **  * * ***+",
        "+** * *  ***    * **  * * ***+",
        "+                            +",
        "+** *   J           <        +",
        "+                       * ***+",
        "+***  *   **    * **  * * ***+",
        "+***                  * * ***+",
        "+             *              +",
        "+**                   *** ***+",
        "+**   *    **                +",
        "+**           X           ***+",
        "+                    ***  ***+",
        "+** **    *  *  * ******  ***+",
        "+** **    *   >      ***     +",
        "+         *              ****+",
        "+** ***   *  *  * ****** ****+",
        "++++++++++++++++++++++++++++++"]


mapa4= ["++++++++++++++++++++++++++++++",
        "+         *    a       *     +",
        "+   *         aXa      J  *  +",
        "+       *                    +",
        "+     *   *       * *        +",
        "+    **         * **    *    +",
        "+           *   *          * +",
        "+*           **        *     +",
        "+  *         *     *        >+",
        "+****************************+",
        "+<                  * *      +",
        "+     * *  *  ****  *      * +",
        "+              *             +",
        "+         *                  +",
        "+    *          *    *    *  +",
        "+           *      *   *     +",
        "+              **           *+",
        "+        *                  *+",
        "+     *        *  *      *   +",
        "++++++++++++++++++++++++++++++"]


mapa5= ["+++++++++++++++++++++++++++++++++++++++++++++++++",
        "+                                               +",
        "+     *****   *******  **    **  *****          +",
        "+     *****   *******  ***  ***  **             +",
        "+     **      **   **  ********  *****          +",
        "+     ** **   *******  ** ** **  *****          +",
        "+     *****   **   **  **    **  **             +",
        "+     *****   **   **  **    **  *****          +",
        "+                                               +",
        "+                          J                    +",
        "+                                               +",
        "+       *****  **   **   *****  ******          +",
        "+       *****  **   **   **     **  **          +",
        "+       ** **   ** **    *****  ******          +",
        "+       ** **   ** **    *****  ****            +",
        "+       *****    ***     **     ** **           +",
        "+       *****    ***     *****  **  **          +",
        "+                                               +",
        "+++++++++++++++++++++++++++++++++++++++++++++++++"]
        
 
d = 4

def obtenerMapa (level) :
     if level == 0 :
          return mapa 
     elif level == 1 :
          return mapa1
     elif level == 2 : 
          return mapa2
     elif level == 3 : 
          return mapa3
     elif level == 4:
          return mapa4
     elif level == 5:
          return mapa5
               
x , y = -1, -1
def findJ (m):
     global x
     global y
     if x == -1 or m[x][y]=="+" :
          for i in range (0,len(m)):
             for j in range (0,len(m[i])):
                 if (m[i][j] == 'J'):
                    x, y = i, j
                    return i, j
     else :
          return x, y
def portal(m):
     for i in range (0,len(m)):
          for j in range (0,len(m[i])):
               if (m[i][j] == '>'):
                    return i, j
def position(m):

    for i in range (0,len(m)):
        for j in range (0,len(m[i])):
            if (m[i][j] == 'X'):
                return i, j

def onArrowKey1(event):
    os.system('cls' if os.name == 'nt' else 'clear')
    global d
    global x
    global y
    mapa = obtenerMapa(d)  

    x, y = findJ(mapa)

    while (True) :
        x -= 1
        if (mapa[x][y] == 'a' ) :
            w,z=position(mapa) 
            if mapa[w][z]=="X":
                x +=1
            break;
        if (mapa[x][y]=="<"):
             x,y=portal(mapa)
             os.system('cls')
             printMatrix(mapa, x, y)
             
        if (mapa[x][y]=="+"):
                x,y=findJ(mapa)
                os.system('cls')
                printMatrix(mapa, x, y)
                break;
        if (mapa[x][y] == '*' ) :
                x += 1
                break;
        if (mapa[x][y] == 'X' ) :
                print ("ganastes")
                d += 1
                x = -1
                os.system('cls')
                mapa=obtenerMapa(d)
                x,y=findJ(mapa)
                printMatrix(mapa, x, y)
                break;
        os.system('cls' if os.name == 'nt' else 'clear')
        printMatrix(mapa, x, y)
       
   
def onArrowKey2(event):
    os.system('cls' if os.name == 'nt' else 'clear')
    global d
    global x
    global y
    
    mapa = obtenerMapa(d)  
    x, y = findJ(mapa)
    printMatrix(mapa, x, y)
    while (True) :
        x += 1
        if (mapa[x][y] == 'a' ) :
            w,z=position(mapa) 
            if mapa[w][z]=="X":
                x -=1
            break;
        if (mapa[x][y]=="<"):
             x,y=portal(mapa)
             os.system('cls')
             printMatrix(mapa, x, y)
             
        if (mapa[x][y]=="+"):
                x,y=findJ(mapa)
                os.system('cls')
                printMatrix(mapa, x, y)
                break;
        if (mapa[x][y] == '*' ) :
                x -= 1
                break;
        if (mapa[x][y] == 'X'  ) :
                print ("ganastes")
                d += 1
                x = -1
                os.system('cls')
                mapa=obtenerMapa(d)
                x,y=findJ(mapa)
                printMatrix(mapa, x, y)
                break;
        os.system('cls' if os.name == 'nt' else 'clear')
        printMatrix(mapa, x, y)
       
   
def onArrowKey3(event):
    os.system('cls' if os.name == 'nt' else 'clear')
    global d
    global x
    global y
    
    mapa = obtenerMapa(d)  
    x, y = findJ(mapa)
    printMatrix(mapa, x, y)
    
    while (True) :
        y -= 1
        if (mapa[x][y] == 'a' ) :
            y=y-1
            if mapa[x][y]=="X":
                y=y+1
                os.system('cls')
                printMatrix(mapa, x, y)
                y=y+1
                break;

        if (mapa[x][y]=="<"):
             x,y=portal(mapa)
             os.system('cls')
             printMatrix(mapa, x, y)
             
        if (mapa[x][y]=="+"):
                x,y=findJ(mapa)
                os.system('cls')
                printMatrix(mapa, x, y)
                break;
        if (mapa[x][y] == '*' ) :
                y += 1
                break;
        if (mapa[x][y] == 'X'  ) :
                print ("ganastes")
                d += 1
                x = -1
                os.system('cls')
                mapa=obtenerMapa(d)
                x,y=findJ(mapa)
                printMatrix(mapa, x, y)
                break;
        os.system('cls' if os.name == 'nt' else 'clear')
        printMatrix(mapa, x, y)
      
def onArrowKey4(event):
    os.system('cls' if os.name == 'nt' else 'clear')
    global d
    global x
    global y
    
    mapa = obtenerMapa(d)  
    x, y = findJ(mapa)
    printMatrix(mapa, x, y)
     
    while (True) :
        y += 1
        if (mapa[x][y] == 'a' ) :
            w,z=position(mapa) 
            y -=1
            break;
        if (mapa[x][y]=="<"):
             x,y=portal(mapa)
             os.system('cls')
             printMatrix(mapa, x, y)
             
        if (mapa[x][y]=="+"):
             x,y=findJ(mapa)
             os.system('cls')
             printMatrix(mapa, x, y)
             break;
        if (mapa[x][y] == '*' ) :
                y -= 1
                break;
        if (mapa[x][y] == 'X'  ) :
                print ("ganastes")
                d += 1
                x = -1
                os.system('cls')
                mapa=obtenerMapa(d)
                x,y=findJ(mapa)
                printMatrix(mapa, x, y)
                break;
               
        os.system('cls' if os.name == 'nt' else 'clear')
        printMatrix(mapa, x, y)
 
def printMatrix(m, x, y) :
    global a
    a=True
    for i in range (0,len(m)):
        for j in range (0,len(m[i])):
            if ( i == x and j == y):
                print "o",
            elif (m[i][j] == 'J'):
                print " ",
            elif (m[i][j] == '<'):
                print "<",
            elif (m[i][j] == '>'):
                print ">",    
            elif (m[i][j] == 'X'):
                print "X",
            elif (m[i][j] == '+' or m[i][j] == '*'):
                print chr(254),
            elif m[x][y]=="+":
                 a=False
            else:
                print " ",
        print ("")
        if a==False:
            print "perdiste"
            break
    time.sleep(0.2000)

labelfont = ('courier', 20, 'bold')              
widget = Label(tkroot, text='Hello bind world')
widget.config(bg='red', font=labelfont)          
widget.config(height=5, width=20)                
widget.pack(expand=YES, fill=BOTH)
 
widget.bind('<Up>',        onArrowKey1)
widget.bind('<Down>',        onArrowKey2)
widget.bind('<Left>',        onArrowKey3)
widget.bind('<Right>',        onArrowKey4)

widget.focus()                                    
tkroot.title('Click Me')
tkroot.mainloop()
