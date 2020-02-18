@echo off
setlocal enabledelayedexpansion
setlocal
echo !date! !time!
for %%a in (compressed\*.lzham) do (
	echo %%~nxa
	lzhamtest_x64 d "%%a" "decompressed\%%~na">nul
	for %%b in ("decompressed\%%~na") do (
		set /a percentage=%%~zb*100/%%~za
		echo !percentage!%%	%%~za TO %%~zb
	)
)
echo !date! !time!
endlocal
