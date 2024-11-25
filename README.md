# LBYARCH-MP2
<h3>HOW TO RUN EXECUTABLE</h3>
Open the run.bat file to run a batch file with certain compiled commands already added.<br>
NOTE: Edit the run.bat file and change the inputs.txt to test 10, 100, 1000, and 10000 test inputs.<br>

<h3>TEST CASE EXECUTION TIME</h3>
10000<br>
0.323000 
0.364000 
0.349000 
0.359000 
0.348000 
0.381000 
0.366000 
0.356000 
0.349000 
0.349000 
0.326000 
0.336000 
0.343000 
0.341000 
0.315000 
0.320000 
0.360000 
0.350000 
0.360000 
0.350000 
0.380000 
0.370000 
0.360000 
0.350000 
0.350000 
0.330000 
0.340000 
0.340000 
0.340000 
0.310000

Average Execution Time: 0.34716666666667 = 0.347200s

1000<br>
0.004000 
0.004000 
0.004000 
0.003000 
0.004000 
0.002000 
0.010000 
0.005000 
0.005000 
0.003000 
0.007000 
0.004000 
0.003000 
0.004000 
0.005000 
0.004000 
0.004000 
0.004000 
0.008000 
0.003000 
0.002000 
0.009000 
0.006000 
0.003000 
0.003000 
0.004000 
0.003000 
0.004000 
0.005000 
0.002000

Average Execution Time: 0.0043666666666667 = 0.004367s

100
0.004000 
0.003000 
0.004000 
0.005000 
0.004000 
0.002000 
0.003000 
0.004000 
0.003000 
0.004000 
0.005000 
0.006000 
0.008000 
0.003000 
0.004000 
0.003000 
0.004000 
0.003000 
0.004000 
0.005000 
0.003000 
0.002000 
0.003000 
0.004000 
0.004000 
0.005000 
0.006000 
0.008000 
0.003000 
0.004000 
0.003000

Average Execution Time: 0.0040645161290323 = 0.004065s

10
0.001000 
0.003000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.001000 
0.000000 
0.001000 
0.000000 
0.001000 
0.000000 
0.003000 
0.001000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000 
0.000000

Average Execution Time: 0.00036666666666667 = 0.000367s <br>

<h3>ANALYSIS</h3>
For 10000 inputs, the average execution time is <b><i>0.3472 seconds.</i></b><br>
For 1000 inputs, it decreases to <b><i>0.004367 seconds.</i></b><br>
For 100 inputs, the execution is slightly lower compared to the previous at <b><i>0.004065 seconds.</i></b><br>
For 10 inputs, the runtime is significantly smaller at <b><i>0.000367 seconds.</i></b><br>
Although invisible in the naked eye, this shows that the larger the input size, the higher the amount in time that the code will run.<br>
O(n) complexity still persists in a linear runtime of execution dependent on the input size.<br>
![image](https://github.com/user-attachments/assets/3de32ea5-f527-47ed-b0f1-ae79a715fddd)
