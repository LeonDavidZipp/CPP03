FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Update and install all dependencies
RUN apt-get update && apt-get install -y \
	xz-utils \
	gcc \
	clang \
	git-all \
	git-core \
	sudo \
	build-essential \
	cmake \
	valgrind \
	libcppunit-dev \
	zsh \
	curl \
	libreadline-dev \
	python3-pip \
	python-dev-is-python3 \
	python3.10-venv

# Upgrade pip and setuptools, and install norminette
RUN python3 -m pip install --upgrade pip setuptools
RUN python3 -m pip install norminette

# add aliases
RUN echo 'alias ga="git add . "' >> ~/.zshrc
RUN echo 'alias gcm="git commit -m "' >> ~/.zshrc
RUN echo 'alias gcd="git commit -m default_commit "' >> ~/.zshrc
RUN echo 'alias gp="git push "' >> ~/.zshrc
RUN echo 'alias gpu= "git pull "' >> ~/.zshrc
RUN echo 'alias gm="git merge "' >> ~/.zshrc
RUN echo 'alias gf="git fetch "' >> ~/.zshrc
RUN echo 'alias gfo="git fetch origin "' >> /.zshrc
RUN echo 'alias gb="git branch -a"' >> ~/.zshrc

# startup command
CMD [ "zsh" ]
