#include <iostream>
#include<cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void Nhapchucai(vector< vector<char> > &screen, char &p ,int num)
{
    switch(p)
    {
        case 'A':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j + num*8] = ' ';
                    if (i==0 && j>=2 && j<=5)
                    {
                        screen[i][j + num*8] = '#';
                    }
                    else if ((i==1 || i==2 || i==4 || i == 5) && (j==1 || j==6) )
                    {
                        screen[i][j + num*8] = '#';
                    }
                    else if (i==3 && j>=1 && j<=6)
                    {
                        screen[i][j + num*8] = '#';
                    }
                }
            }
            //  ####
            // #    #
            // #    #
            // ######
            // #    #
            // #    #
            break;
        }
        case 'B':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'C':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'D':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'E':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j + num*8] = ' ';
                    if ((i==0 || i==2 || i==5) &&  j>=1 && j<=6)
                    {
                        screen[i][j + num*8] = '#';
                    }
                    else if ( (i==1 || i==3 || i==4) && j==1 )
                    {
                        screen[i][j + num*8] = '#';
                    }
                }
            }
            // ######
            // #
            // ######
            // #
            // #
            // ######
            break;
        }
        case 'F':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'G':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'H':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';
                    if( i!=2 && (j==1 || j==6) )
                    {
                        screen[i][j+num*8] = '#';
                    }
                    else if ( i==2 && (j>=1 && j<=6) )
                    {
                        screen[i][j+num*8] = '#';
                    }
                }
            }
            // #    #
            // #    #
            // ######
            // #    #
            // #    #
            // #    #
            break;
        }
        case 'I':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    if (j==3)
                        screen[i][j + num*8] = '#';
                    else screen[i][j + num*8] = ' ';
                }
            }
            //  #
            //  #
            //  #
            //  #
            //  #
            //  #
            break;
        }
        case 'J':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'K':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';
                    if ( (i==0 || i==5) && (j==1 || j==6))
                        screen[i][j+num*8] = '#';
                    else if ( (i==1 || i==4) && (j==1 || j==5))
                        screen[i][j + num*8] = '#';
                    else if ( i==2 && j>=1 && j<=4)
                        screen[i][j+num*8] = '#';
                    else if (i==3 && (j==1 || j==4))
                        screen[i][j+num*8] = '#';
                }
            }
            // #    #
            // #   #
            // ####
            // #  #
            // #   #
            // #    #
            break;
        }
        case 'L':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';    
                    if (i<5 && j==1)
                        screen[i][j+ num*8] = '#';
                    else if (i==5 && j>=1 && j <= 6)
                        screen[i][j+num*8] = '#';
                }
                // #
                // #
                // #
                // #
                // #
                // ######
            }
            break;
        }
        case 'M':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';
                    if ( j==1 || j==6 )
                        screen[i][j + num*8] = '#';
                    else if ( (i==1) && ((j>=1 && j<=2) || (j>=5 && j<=6)))
                        screen[i][j + num*8] = '#';
                    else if ( (i==2) && (j== 3 || j==4) )
                        screen[i][j+num*8] = '#';
                }
            }
            //#    #
            //##  ##
            //# ## #
            //#    #
            //#    #
            //#    #
            break;
        }
        case 'N':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j + num*8] = ' ';
                    if (j==1 || j==6)
                        screen[i][j + num*8] = '#';
                    else if (i>=1 && i<=4)
                        screen[i][i + 1 + num*8] = '#'; 
                }
            }
            //#    #
            //##   #
            //# #  #
            //#  # #
            //#   ##
            //#    #
            break;
        }
        case 'O':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';
                    if ((i==0 || i==5) && (j>=2 && j<=5))
                        screen[i][j + num*8] = '#';
                    else if ((i>=1 && i<=4) && (j==1 || j==6))
                        screen[i][j +num*8] = '#';
                }
            }
            //  ####
            // #    #
            // #    #
            // #    #
            // #    #
            //  ####
            break;
        }
        case 'P':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'Q':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'R':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'S':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'T':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j + num*8] = ' ';
                    if (i==0 && j>=1 && j<=5)
                        screen[i][j + num*8] = '#';
                    else if ( j == 3)
                        screen[i][j+num*8] = '#';
                }
            }
            //#####
            //  #
            //  #
            //  #
            //  #
            //  #
            break;
        }
        case 'U':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j + num*8] = ' ';
                    if (i<5 && (j==1 || j == 6))
                        screen[i][j + num*8] = '#';
                    else if ( i==5 && j<=5 && j>=2)
                        screen[i][j + num*8] = '#';
                }
            }
            //#    #
            //#    #
            //#    #
            //#    #
            //#    #
            // ####
            break;
        }
        case 'V':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    screen[i][j+num*8] = ' ';
                    if (i>=0 && i<=3 && (j==1 || j==6))
                        screen[i][j+num*8] = '#';
                    else if ( (i==4 && (j==2 || j==5) )|| (i==5 && (j==3 || j==4)) )
                        screen[i][j+num*8] = '#';
                }
            }
            // #    #
            // #    #
            // #    #
            // #    #
            //  #  #
            //   ##
            break;
        }
        case 'W':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'X':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'Y':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
        case 'Z':
        {
            for (int i=0; i<6; i++)
            {
                for (int j=0; j<8; j++)
                {
                    
                }
            }
            break;
        }
    }
}

int main()
{
    string str;
    getline(cin,str);
    vector< vector<char> > screen;
    screen.resize(6);
    int leng = str.length();
    for (int i=0; i<6; i++)
    {
        screen[i].resize(leng*8);
    }
    for (int i=0; i<leng; i++)
        {
            if (str[i]<='z' && str[i]>='a')
            {
                int p = (int)str[i] - 32;
                str[i] = (char)p;
            }
            Nhapchucai(screen, str[i] ,i);
        }
    for (int line=0; line<6; line++)
    {
        for (int i=0; i<leng*8; i++)
        {
            cout<<screen[line][i];
        }
        cout<<endl;
    }
}

