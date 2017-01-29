# Enter your code here. Read input from STDIN. Print output to STDOUT

NQ = gets.chomp.split(" ")

N = NQ[0].to_i
Q = NQ[1].to_i

seqList = Array.new(N) { Array.new }

lastAns = 0

for q in (0..Q-1)
    query = gets.chomp.split(" ")
    if(query[0].to_i == 1)
        #stuff here
        x = query[1].to_i
        y = query[2].to_i
        index = (x ^ lastAns) % N
        seqList[index].push(y)  
    else
        x = query[1].to_i
        y = query[2].to_i
        index = (x ^ lastAns) % N
        seq = seqList[index]
        elementIndex = y % seq.size()
        lastAns = seq[elementIndex]
        puts lastAns
    end
end
#puts "#{N} #{Q}"
