100 'Maze
110 ON KEY(1) GOSUB 270: KEY(1) ON: ON ERROR GOTO 230
120 SCREEN 1: KEY OFF: CLS : ZZC = 1
130 DEF SEG = &HF000: A = PEEK(&HC05D): DEF SEG : IF A = &H4C THEN ZZC = 3
140 YD = 14: XD = YD: YN = INT(199 \ YD): XN = INT(319 \ XD)
150 DIM P(XN + 2, YN + 2), Q(XN, YN), A%(9)
160 FOR I = 0 TO 9: READ A%(I): NEXT
170 DATA &H10,&H8,&HF003,&HF003,&HC000,&HFF3F,&HC000,&H3003,&HC0C,&H330
180 XV(0) = 1: XV(1) = 0: XV(2) = -1: XV(3) = 0
190 YV(0) = 0: YV(1) = 1: YV(2) = 0: YV(3) = -1
200 GOSUB 290: FOR OKL = 1 TO 5000: NEXT
210 GOTO 200
220 'Error
230 CLS : IF ERR = 5 THEN 240 ELSE RESUME 280
240 PRINT "Valid only for Color Display."
250 FOR I = 0 TO 5000: NEXT I: RESUME 270
260 'Return to menu
270 CLS : SCREEN 0, , 0, 0: WIDTH 80: COLOR 7, 0, 0: LOCATE , , 1: RUN "demo"'op
280 END
290 '
300 RANDOMIZE TIMER
310 FOR X = 0 TO XN + 2: P(X, 0) = 1: P(X, 1) = 1: P(X, YN + 1) = 1: P(X, YN + 2) = 1: NEXT
320 FOR Y = Y TO YN + 2: P(0, Y) = 1: P(1, Y) = 1: P(XN + 1, Y) = 1: P(XN + 2, Y) = 1: NEXT
330 FOR X = 2 TO XN: FOR Y = 2 TO YN: P(X, Y) = 0: NEXT: NEXT
340 FOR X = 0 TO XN: FOR Y = 0 TO YN: Q(X, Y) = 0: NEXT: NEXT
350 CLS
360 LINE (XD * 0, YD * 0)-(XD * XN, YD * 0), ZZC, B
370 LINE -(XD * XN, YD * (YN - 1)), ZZC, B
380 LINE (XD * 0, YD * 1)-(XD * 0, YD * YN), ZZC, B
390 LINE -(XD * XN, YD * YN), ZZC, B
400 C = ZZC: GOSUB 440: C = 2
410 IF ZZC = 3 THEN C = 3
420 GOSUB 630
430 RETURN
440 '
450 XMIN = 0: XMAX = XN: YMIN = 0: YMAX = YN
460 WHILE (XMIN < XMAX AND YMIN < YMAX)
470  FOR XO = XMIN TO XMAX: X = XO: Y = YMIN: GOSUB 530: NEXT: YMIN = YMIN + 1
480  FOR YO = YMIN TO YMAX: Y = YO: X = XMAX: GOSUB 530: NEXT: XMAX = XMAX - 1
490  FOR XO = XMIN TO XMAX: X = XO: Y = YMAX: GOSUB 530: NEXT: YMAX = YMAX - 1
500  FOR YO = YMIN TO YMAX: Y = YO: X = XMIN: GOSUB 530: NEXT: XMIN = XMIN + 1
510 WEND
520 RETURN
530 '
540 S = INT(RND(1) * 4)
550 FOR N = S TO 3 + S: V = N MOD 4
560  IF P(X + XV(V) + 1, Y + YV(V) + 1) GOTO 610
570  P(X + XV(V) + 1, Y + YV(V) + 1) = 1
580  LINE (X * XD, Y * YD)-((X + XV(V)) * XD, (Y + YV(V)) * YD), C, B
590  X = X + XV(V): Y = Y + YV(V)
600  GOTO 540
610 NEXT
620 RETURN
630 '
640 XB = XD / 2: YB = YD / 2
650 XW(0) = XD: XW(1) = XB - 1: XW(2) = 0: XW(3) = XB - 1
660 YW(0) = YB - 1: YW(1) = YD: YW(2) = YB - 1: YW(3) = 0
670 LINE (0, YB)-(XB, YB), C, , &H5555: PUT (4, 4), A%
680 X = 0: Y = 0: S = 0
690 WHILE (X <> XN - 1 OR Y <> YN - 1)
700  Q(X, Y) = 1: PUT (X * XD + 4, Y * YD + 4), A%: PRESET (X * XD + XB, Y * YD + YB)
710  FOR N = S + 3 TO S + 6: V = N MOD 4
720   IF POINT((X * XD + XW(V)), (Y * YD + YW(V))) THEN 780
730   X = X + XV(V): Y = Y + YV(V)
740   IF Q(X, Y) THEN CL = 0 ELSE CL = C
750   LINE -(X * XD + XB, Y * YD + YB), CL, , &H5555: PUT (X * XD + 4, Y * YD + 4), A%
760   S = V: IF Q(X, Y) = 0 THEN FOR ZZ = 1 TO 1000: NEXT
770   GOTO 790
780  NEXT
790 WEND
800 FOR J = 1 TO 4: PUT (X * XD + 4, Y * YD + 4), A%
810 PLAY "T120O3L64ABCDFGGABO4C": FOR OKR = 1 TO 400: NEXT OKR, J
820 RETURN

