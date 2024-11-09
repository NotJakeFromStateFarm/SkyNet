$part1 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("aHR0cHM6Ly90aW55dXJsLmNvbS8="))
$part2 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("M3R0ZjJ3d2U="))
$output = $part1 + $part2
Write-Output $output
