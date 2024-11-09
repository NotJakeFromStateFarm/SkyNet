$part2 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("UF9pbWlsTFNKYksbUJnNA=="))
$part3 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("d3oybg==QTh1TGwMkthTQ=="))
$part4 = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String("ekNZUw==-gMQX_MCLg"))
$output = $part2 + $part3 + $part4
Write-Output $output
