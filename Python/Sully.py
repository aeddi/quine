import os

i = 5
if os.path.isfile("Sully_%d.py" % (i)):
	i -= 1

filename = "Sully_%d.py" % (i)
src = 'import os\n\ni = %d\nif os.path.isfile("Sully_%%d.py" %% (i)):\n\ti -= 1\n\nfilename = "Sully_%%d.py" %% (i)\nsrc = %r\n\nfile = open(filename, "w")\nfile.write(src %% (i, src))\nfile.close()\n\nif i:\n\tos.system("python2 %%s" %% filename)\n'

file = open(filename, "w")
file.write(src % (i, src))
file.close()

if i:
	os.system("python2 %s" % filename)
