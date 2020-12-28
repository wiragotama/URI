from datetime import datetime, timedelta
from math import floor

At = 365.25
jup = 11.9
sat = 29.6

n = float(input())

curr = datetime(2020, 12, 21)
elapsed_days_jup = floor(jup * At * n)
date_jup = curr + timedelta(elapsed_days_jup)

elapsed_days_sat = floor(sat * At * n)
date_sat = curr + timedelta(elapsed_days_sat)

print("Dias terrestres para Jupiter =",elapsed_days_jup)
print("Data terrestre para Jupiter:", date_jup.strftime('%Y-%m-%d'))
print("Dias terrestres para Saturno =", elapsed_days_sat)
print("Data terrestre para Saturno:", date_sat.strftime('%Y-%m-%d'))