$part2 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("UF9pbWlsTFNKYks="))
$part3 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("Yk1nNA=="))
$part4 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("d3oybg=="))
$part5 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("MkthOQ=="))
$part6 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("ekNZUw=="))
$part7 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("LWdNUQ=="))
$part8 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("WF9NQw=="))
$part9 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("THc="))
$output = $part2 + $part3 + $part4 + $part5 + $part6 + $part7 + $part8 + $part9
Write-Output $output
