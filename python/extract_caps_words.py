import sys
import string

f = open('pride_and_prejudice_caps.txt','r+')
#flag = False
lines_seen = set()
def upper_case_words(filename):
    with open(filename,'r') as fp:
        for line in fp:
            for word in line.split():
                if word.isupper():
		   f.write(word)
		   f.write("\n")		
	f.close()
with open('pride_and_prejudice_caps.txt','r') as fp1:
	unique_word = set(fp1.readlines())
	print unique_word
	with open('pride_and_prejudice_caps1.txt','w') as fp2:
		fp2.writelines(set(unique_word))

if __name__ == '__main__':
    if (len(sys.argv)) == 2:
         filename = sys.argv[1]
         upper_case_words(filename)
