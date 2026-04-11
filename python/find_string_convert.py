str = "X-DSPAM-Confidence:0.8475"

colon_position = str.find(":")
float_str = str[colon_position + 1 : ]
print(float(float_str))