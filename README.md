# potential-octo-guide
Repo containing code sample for internship

Taken from a project assigned in a course, where I was tasked with designing a computationally efficient algorithm for multiplying matrices.  I took advantage of low-level features like cache and sequential memory access, multithreading and parallel processing, and relying on values stored in registers to speed up memory access.  Resulting times are shown below:


|SIZE  |    BASE    |   OPTM     |  SPDUP |  LOG2 | FACTOR | POINTS 
|  273 | 3.9440e-02 | 1.8814e-02 |  2.10  | 1.07  | 1.00   | 1.07 
|  512 | 2.6414e-01 | 1.1595e-01 |  2.28  | 1.19  | 1.88   | 2.23 
|  722 | 6.4400e-01 | 3.2671e-01 |  1.97  | 0.98  | 2.64   | 2.59 
|  801 | 8.6760e-01 | 4.3968e-01 |  1.97  | 0.98  | 2.93   | 2.88 
| 1024 | 3.4201e+00 | 9.1695e-01 |  3.73  | 1.90  | 3.75   | 7.12 
| 1101 | 5.8306e+00 | 1.1746e+00 |  4.96  | 2.31  | 4.03   | 9.32 
| 1309 | 1.4589e+01 | 1.9449e+00 |  7.50  | 2.91  | 4.79   | 13.94 

RAW POINTS: 39.15
TOTAL POINTS: 35 / 35 
