#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	
	if(a!=1 && a!=3 && a!=5 && a!=7 && a!=9 && a!=11 && a!=13 && a!=15 && a!=17 && a!=19)
	{
		cout<<"error!!\nplease insert new number";
	}
	else if(a==1)
	{
		cout<<"#";
	}
	else if(a==3)
	{
		cout<<"###\n###\n###";
	}
	else if(a==5)
	{
		cout<<"#####\n## ##\n# ###\n## ##\n#####";
	}
	else if(a==7)
	{
		cout<<"#######\n##   ##\n# # ###\n#  ####\n# # ###\n##   ##\n#######";
	}
	else if(a==9)
	{
		cout<<"#########\n##     ##\n# #   ###\n#  # ####\n#   #####\n#  # ####\n# #   ###\n##     ##\n#########";
	}
	else if(a==11)
	{
		cout<<"###########\n##       ##\n# #     ###\n#  #   ####\n#   # #####\n#    ######\n#   # #####\n#  #   ####\n# #     ###\n##       ##\n###########";
	}
	else if(a==13)
	{
		cout<<"#############\n##         ##\n# #       ###\n#  #     ####\n#   #   #####\n#    # ######\n#     #######\n#    # ######\n#   #   #####\n#  #     ####\n# #       ###\n";
		cout<<"##         ##\n#############";
	}
	else if(a==15)
	{
		cout<<"###############\n##           ##\n# #         ###\n#  #       ####\n#   #     #####\n#    #   ######\n#     # #######\n#      ########\n#     # #######\n";
		cout<<"#    #   ######\n#   #     #####\n#  #       ####\n# #         ###\n##           ##\n###############";
	}
	else if(a==17)
	{
		cout<<"#################\n##             ##\n# #           ###\n#  #         ####\n#   #       #####\n#    #     ######\n#     #   #######\n#      # ########\n";
		cout<<"#       #########\n#      # ########\n#     #   #######\n#    #     ######\n#   #       #####\n#  #         ####\n# #           ###\n##             ##\n#################";
	}
	else if(a==19)
	{
		cout<<"###################\n##               ##\n# #             ###\n#  #           ####\n#   #         #####\n#    #       ######\n#     #     #######\n#      #   ########\n";
		cout<<"#       # #########\n#        ##########\n#       # #########\n#      #   ########\n#     #     #######\n#    #       ######\n#   #         #####\n#  #           ####\n";
		cout<<"# #             ###\n##               ##\n###################";
	}
	return 0;
}
	
	
		
	 