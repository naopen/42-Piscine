#!/bin/bash

awk '/^[^#]/ { print }' ../.gitignore

