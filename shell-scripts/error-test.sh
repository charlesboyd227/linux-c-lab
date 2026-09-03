#!/bin/bash

trap 'echo "Error occurred!"' ERR

ls /this-folder-does-not-exist

