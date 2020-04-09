## METHOD USED:
1. Used the ip core inbuilt module to build the dmem and imem modules.
2. Used 4 Brams for enabling byte addressing. Used a we(new) signal to differentiate between byte-store,half-word-store and fully-word store.
3. While loading we will not face any issue of this since we can always read all the 32 bits and mask it according to the required type of load.
4. Verified that the program is using brams and not excessive i-o-flip flops.
5. Created a test bench as in assigment 0 to check the validity of the modules.
