# Function to apply a Caesar cipher shift
function CaesarCipher {
    param (
        [string]$input,
        [int]$shift
    )
    $output = ""
    foreach ($char in $input.ToCharArray()) {
        if ($char -match '[A-Za-z]') {
            $ascii = [int][char]$char
            $base = if ($char -cmatch '[A-Z]') { 65 } else { 97 }
            $newChar = [char](($ascii - $base + $shift) % 26 + $base)
            $output += $newChar
        }
        elseif ($char -match '[0-9]') {
            $newChar = [char](((([int][char]$char - [int][char]'0' + $shift) % 10) + [int][char]'0'))
            $output += $newChar
        }
        else {
            $output += $char  # Non-alphabetical characters remain the same
        }
    }
    return $output
}

# Encoded message using a Caesar cipher with a shift of 5
$encodedMessage = "MWH{S5uD2wT5q6jWj2w5jWq5j2{"
$shift = -5  # To decode

# Decode the message
$decodedMessage = CaesarCipher -input $encodedMessage -shift $shift

# Output the result
Write-Output $decodedMessage
