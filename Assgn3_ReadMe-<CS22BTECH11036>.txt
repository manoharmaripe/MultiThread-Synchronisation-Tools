            CS3523: OPERATING SYSTEMS-2
            Programming Assignment-3
       
                                                                        NAME: Manohar Naidu
                                                                        Roll No: CS22BTECH11036

DESCRIPTION
    # This folder contains  a README 
    corresponding to the problem statements in 
        Programming Assignment-3
           
    ---> There are two cpp codes.One is for chunk and one is for mixed and one is for other type.
    ---> input file name is inp.txt. It should be in same directory. First line has N K P. Where P is rowIter

COMPLILING INSTRUCTIONS
    command to complile any code - clang++ -std=c++11 [filename].cpp (clang++ -std=c++11 Assgn3_Src-\<CS22BTECH11036\>_[algorithm].cpp )
    command to execute compiled code - ./a.out
   
Make sure that inp.txt file is in the same directory of the executing file otherwise it doesn't take the inputs from the file.
Make sure to have a inp.txt file created and have values to get N and K and rowIter (P) .And also the matrix A.

    inp.txt contains N, K and P values in it providing 'space' or a '\n' in between them. 
    And also the matrix A by providing space between each element in the row and 'new line' after each row


###====>>>   There are 4 source files in the folder. Run all the files one after other and check the outfile "out[algorithm].txt" respectively.

        After successfull compilation and running the program gives us the required out.txt file containing 
        (a) The resulting square matrix
        (b) Time taken to compute the square matrix
        respectively.
        
        EXAMPLE:
        inp.txt:
         	16 8 8 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
            1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 

    After compiling and running the code using mixed computing then it creates one  'out.txt'  in the same directory as
         
         out.txt:
            time:0.000292
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
            16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 
