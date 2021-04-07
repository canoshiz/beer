@echo off
setlocal enabledelayedexpansion
set count=bottles
for /l %%i in (99,-1,0) do (
	if /i %%i equ 1 set count=bottle
	if /i %%i neq 0 (
		if /i %%i neq 99 (
			echo %%i !count! of beer on the wall
			echo.
		)
		echo %%i !count! of beer on the wall,
		echo %%i !count! of beer
		echo.
		echo Take one down, pass it around,
	) else (
		echo no more bottles of beer on the wall
		echo.
		echo Go to the store and buy some more,
		echo 99 bottles of beer on the wall
	)
)
