#!/bin/bash

ifconfig | grep ether -w | cut -f 2 -d ' '