#!/bin/bash
blih -u guillaume.corbet@epitech.eu repository create $1
blih -u guillaume.corbet@epitech.eu repository setacl $1 ramassage-tek r
blih -u guillaume.corbet@epitech.eu repository getacl $1
