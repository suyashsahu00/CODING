import { Link } from "@heroui/link";
import { Snippet } from "@heroui/snippet";
import { Code } from "@heroui/code";
import { button as buttonStyles } from "@heroui/theme";

import { title, subtitle } from "@/components/primitives";
import { GithubIcon } from "@/components/icons";
import DefaultLayout from "@/layouts/default";

export default function IndexPage() {
  return (
    <DefaultLayout>
      <section className="flex flex-col items-center justify-center gap-4 py-8 md:py-10">

        


        <div className="inline-block max-w-lg text-center justify-center">
          <span className={title()}>Hello! I’m&nbsp;</span>
          <span className={title({ color: "violet" })}>Suyash Sahu&nbsp;</span>
          <br />
          <span className={title()}>
            Frontend Developer  from Raipur, Chhattisgarh, India
          </span>
          <div className={subtitle({ class: "mt-4" })}>
            I build beautiful, responsive, and performant web applications with React, Tailwind CSS, and modern frameworks.
          </div>
        </div>

        


        <div className="flex gap-3 mt-4">
          <Link
            className={buttonStyles({
              color: "primary",
              radius: "full",
              variant: "shadow",
            })}
            href="#projects"
          >
            View Projects
          </Link>
          <Link
            className={buttonStyles({ variant: "bordered", radius: "full" })}
            href="mailto:suyashsahu00@gmail.com"
          >
            Contact Me
          </Link>
          <Link
            isExternal
            className={buttonStyles({ variant: "bordered", radius: "full" })}
            href="https://github.com/suyashsahu00"
          >
            <GithubIcon size={20} />
            GitHub
          </Link>
        </div>

        


            
        <div className="mt-8">
          <Snippet hideCopyButton hideSymbol variant="bordered">
            <span>
              Passionate about coding & design — scroll down to see my work and skills!
            </span>
          </Snippet>
        </div>
      </section>
    </DefaultLayout>
  );
}
