"""
Life on mars
"""
data = {
    'AA': 'Glycine',
    'AT': 'Cysteine',
    'AU': 'START',
    'TA': 'END',
    'TT': 'END',
    'TU': 'Arginine',
    'UA': 'Serine',
    'UT': 'DELETE',
    'UU': 'Lysine'
}

inp = input()
end = False

while not end:
    out = []
    meta = False
    end = False
    while not end:
        if len(inp) < 2:
            break
        pair = inp[:2]
        signal = data[pair]
        if signal == 'START':
            meta = True
            inp = inp[2:]
        elif signal == 'END':
            if meta:
                end = True
            else:
                inp = inp[1:]
            meta = False
        else:
            if meta:
                if signal != 'DELETE':
                    out.append(signal)
                else:
                    out.pop()
                inp = inp[2:]
            else:
                inp = inp[1:]

    if len(out) == 0 or not end:
        print('None')
        break
    else:
        print(','.join(out))
        break
