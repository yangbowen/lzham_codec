@echo off
setlocal enabledelayedexpansion
setlocal
echo !date! !time!
for %%a in (original\*) do (
	echo %%~nxa
	lzhamtest_x64 c "%%a" "compressed\%%~nxa.lzham">nul
	for %%b in ("compressed\%%~nxa.lzham") do (
		set /a percentage=%%~zb*100/%%~za
		echo !percentage!%%	%%~za TO %%~zb
	)
)
echo !date! !time!
endlocal
