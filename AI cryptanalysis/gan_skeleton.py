import torch
import torch.nn as nn
class Generator(nn.Module):
    def __init__(self):
        super().__init__()
        self.net=nn.Sequential(nn.Linear(100,128),nn.ReLU(),nn.Linear(128,26))
    def forward(self,x):return self.net(x)
class Discriminator(nn.Module):
    def __init__(self):
        super().__init__()
        self.net=nn.Sequential(nn.Linear(26,128),nn.ReLU(),nn.Linear(128,1),nn.Sigmoid())
    def forward(self,x):return self.net(x)
G=Generator()
D=Discriminator()
print("GAN skeleton initialized")
