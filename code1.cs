using System;

namespace SuperendermanAI
{
    class Program
    {
        // Shared state (equivalent to Python globals)
        static string name;
        static string t = "true";
        static string anymore;
        static string called;

        static void Main(string[] args)
        {
            Console.Write("username  ");
            name = Console.ReadLine();
            t = "true";

            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine($"hello {name} im superenderman industrys's ai computer ");

            // Fixed: the original Python 'or' chain was always true.
            // This properly checks membership in the DEV list.
            string[] devNames =
            {
                "superendermanDEV",
                "notmainhtsnDEV",
                "negmaintannerDEV",
                "notmaintmsnDEV",
                "notmainduckDEV",
                "inmainbentlynDEV",
                "secendarymainDEV"
            };

            if (Array.IndexOf(devNames, name) >= 0)
            {
                if (name == "superendermanDEV" || name == "secondarymainDEV")
                {
                    HelpMe();
                }
                else
                {
                    Console.WriteLine("position : DEV");
                }
            }

            Console.Write("reason ");
            string request = Console.ReadLine();
            Console.Write("who    ");
            string request2 = Console.ReadLine();

            ProcessRequest(request, request2);

            Console.Write("anymore?   ");
            anymore = Console.ReadLine();
            Ask();

            if (anymore == "no")
            {
                called = Console.ReadLine();
            }

            while (t == "true" || called == "computer")
            {
                Console.Write("anymore?   ");
                anymore = Console.ReadLine();
                Ask();

                if (t == "false")
                {
                    called = Console.ReadLine();
                }

                if (called == "computer")
                {
                    t = "true";
                }
                else
                {
                    called = Console.ReadLine();
                }
            }
        }

        static void HelpMe()
        {
            if (name == "secondarymainDEV")
            {
                Console.WriteLine("position : highest DEV");
            }
            else
            {
                Console.WriteLine("position : founder / extreme highest DEV");
            }
        }

        static void CallMeWhenNeeded()
        {
            Console.WriteLine("when needed call me");
            Console.WriteLine("");
            Console.WriteLine("");
            called = Console.ReadLine();
        }

        static void Ask()
        {
            if (anymore == "yes")
            {
                Console.Write("reason ");
                string request = Console.ReadLine();
                Console.Write("who    ");
                string request2 = Console.ReadLine();

                ProcessRequest(request, request2);

                t = "true";
            }
            else
            {
                t = "false";
            }
        }

        // Shared request-handling logic (used by both the main flow and Ask),
        // exactly matching the duplicated Python blocks.
        static void ProcessRequest(string request, string request2)
        {
            if (request == "computer@pt$ insult")
            {
                Console.WriteLine($"robert i dont like dis human, well his name is {request2} robert he has no intellect");
            }

            if (request == "computer@pt$ hire")
            {
                // Fixed: the original Python 'or' chain was always true.
                if (request2 == "gunther" || request2 == "patrick grimm")
                {
                    Console.WriteLine("system emergency overide");
                }
                else
                {
                    Console.WriteLine($"adding {request2} to team");
                }
            }

            if (request == "computer@pt$ fire")
            {
                Console.WriteLine($"{request2} fired");
            }

            if (request == "computer@pt$ quest!0n should i hire")
            {
                // Fixed: the original Python 'or' chain was always true.
                if (request2 == "gunther" || request2 == "patrick grimm")
                {
                    Console.WriteLine($"no dont hire {request2}");
                }
                else
                {
                    Console.WriteLine($"maybe hire {request2}");
                }
            }
        }
    }
}
