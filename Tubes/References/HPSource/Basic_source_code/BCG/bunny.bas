10 PRINT TAB(33);"BUNNY"
20 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
30 PRINT: PRINT: PRINT
100 REM  "BUNNY" FROM AHL'S 'BASIC COMPUTER GAMES'
110 REM
120 FOR I=0 TO 4: READ B(I): NEXT I
130 GOSUB 260
140 L=64: REM  ASCII LETTER CODE...
150 REM
160 PRINT
170 READ X: IF X<0 THEN 160
175 IF X>128 THEN 240
180 PRINT TAB(X);: READ Y
190 FOR I=X TO Y: J=I-5*INT(I/5)
200 PRINT CHR$(L+B(J));
210 NEXT I
220 GOTO 170
230 REM
240 GOSUB 260: GOTO 450
250 REM
260 FOR I=1 TO 6: PRINT CHR$(10);: NEXT I
270 RETURN
280 REM
290 DATA 2,21,14,14,25
300 DATA 1,2,-1,0,2,45,50,-1,0,5,43,52,-1,0,7,41,52,-1
310 DATA 1,9,37,50,-1,2,11,36,50,-1,3,13,34,49,-1,4,14,32,48,-1
320 DATA 5,15,31,47,-1,6,16,30,45,-1,7,17,29,44,-1,8,19,28,43,-1
330 DATA 9,20,27,41,-1,10,21,26,40,-1,11,22,25,38,-1,12,22,24,36,-1
340 DATA 13,34,-1,14,33,-1,15,31,-1,17,29,-1,18,27,-1
350 DATA 19,26,-1,16,28,-1,13,30,-1,11,31,-1,10,32,-1
360 DATA 8,33,-1,7,34,-1,6,13,16,34,-1,5,12,16,35,-1
370 DATA 4,12,16,35,-1,3,12,15,35,-1,2,35,-1,1,35,-1
380 DATA 2,34,-1,3,34,-1,4,33,-1,6,33,-1,10,32,34,34,-1
390 DATA 14,17,19,25,28,31,35,35,-1,15,19,23,30,36,36,-1
400 DATA 14,18,21,21,24,30,37,37,-1,13,18,23,29,33,38,-1
410 DATA 12,29,31,33,-1,11,13,17,17,19,19,22,22,24,31,-1
420 DATA 10,11,17,18,22,22,24,24,29,29,-1
430 DATA 22,23,26,29,-1,27,29,-1,28,29,-1,4096
440 REM
450 END
