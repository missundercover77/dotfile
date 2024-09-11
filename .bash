$ echo "Bienvenue {whoami}" 

alias ls = 'ls -a' 'ls -l'

alias ll = 'll -l' 'll -a'

alias c = 'clear'

alias grepc = 'grep --color=always'

creerDossier()
{
	mkdir $1
	cd $1 
}


creerFichier()
{
	touch $1
	vim $1	
}



