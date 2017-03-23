function sum(arr, n)
    sum = 0
    for i = 1: n
        sum += arr[i]
    end
    return sum
end

function sum_2(arr, n)
    sum = 0
    k = div(n, 2)
    i = 1
    while k > 0
        sum += (v[i] + v[n - i + 1])
        i += 1
        k -= 1
    end
    if n % 2 == 1
        sum += v[div(n, 2) + 1]
    end
    return sum
end

function first_odd(arr, n)
    for i = 1: n
        if v[i] & 1 == 1
            return v[i]
        end
    end
    return "Nao existe numero impar nesse vetor"
end

function rec_sum(arr, n)
    if n == 1
        return v[1]
    end
    return arr[n] + rec_sum(arr, n - 1)
end

function rec_odd(arr, n)
    if(arr[n] & 1 == 1)
        return arr[n]
    elseif n > 1
        return rec_odd(arr, n - 1)
    end
    return "Nao existe numero impar nesse vetor"
end

v = [4, 2, 6, 4, 8]

println(sum_2(v, 1))
