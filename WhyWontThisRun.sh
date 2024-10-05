#!/bin/bash

input_encoded="MTAwNTIwMjQ=" 
output_encoded="SFRIeyhOMHAwYml0eU5vcm1vcnNlTjByZW1vcnNlTjBmZWFy}" 

# Function to decode base64
decode_base64() {
    echo "$1" | base64 --decode
}

# Decode input and output
input=$(decode_base64 "$input_encoded")
output=$(decode_base64 "$output_encoded")

# Read user input
read -p "Enter the code: " user_input

# Check input
if [[ "$user_input" == "$input" ]]; then
    echo "$output"
else
    echo "Invalid input!"
fi
